#include <iostream>
#include <iomanip>
#include <cstring>
#include <ctime>
#include <cstdlib>
#include <fstream>
using namespace std;
void Nhap(int[][500], int&, int&);
void Xuat(int[][500], int, int);
void Xuat(int[][500], int, int, string);


int main()
{
	int b[500][500];
	int m;
	int n;
	Nhap(b, m, n);
	Xuat(b, m, n);
	Xuat(b, m, n, "data01.inp");
	return 0;
}

void Nhap(int a[][500], int& m, int& n)
{
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] = rand() % (200 + 1) - 100;
		}
	}
}

void Xuat(int a[][500], int m, int n)
{
	cout << "So hang: " << m << endl;
	cout << "So cot: " << n << endl;
	for (int i = 0 ;i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(8) << a[i][j];
		}
		cout << endl;
	}
}

void Xuat(int a[][500], int m, int n, string filename)
{
	ofstream fo(filename);
	fo << "So hang:" << setw(8) << m << endl;
	fo <<"So cot: "<< setw(8) << n;
	fo << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			fo <<setw(8)<< a[i][j];
		}
		fo << "\n";
	}

}