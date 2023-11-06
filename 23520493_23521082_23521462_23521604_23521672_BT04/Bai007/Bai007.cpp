#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

void Nhap(string, float[][100], int&, int&);
void Xuat(float[][100], int, int);void Nhap(string fname, float a[][100], int& m, int& n){	ifstream fi(fname);
	fi >> m >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			fi >> a[i][j];}void Xuat(float a[][100], int m, int n)
{
for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			 cout << fixed << setw(10) <<setprecision(3) << a[i][j];
		cout << endl;
	 }
}

int main()
{
    float a[100][100];
	int k, l;
	Nhap("intmatrandata01.inp", a, k, l);
	Xuat(a, k, l);
	return 0;
}