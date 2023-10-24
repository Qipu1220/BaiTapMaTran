#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
void Nhap(string,float[][60], int&, int&);
void Xuat(float[][60], int, int);

int main()
{
	float a[60][60];
	int k, l;
	string filename = "floatdata06.inp";
	Nhap(filename, a, k, l);
	Xuat(a, k, l);
	return 0;

}

void Nhap(string filename, float a[][60], int& m, int& n)
{
	ifstream fi(filename);
	fi >> m;
	fi >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			fi >> a[i][j];
}
void Xuat(float a[][60], int m, int n)
{

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(8) << a[i][j];
		cout << endl;
	}
}
