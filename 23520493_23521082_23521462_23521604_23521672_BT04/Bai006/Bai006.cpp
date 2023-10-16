#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(double[][200], int& m, int& n);
void Xuat(double [][200], int, int);

int main()
{
	double a[200][200];
	int m, n;
	Nhap(a, m, n);
	Xuat(a, m, n);
	return 0;
}

void Nhap(double a[][200], int& m, int& n)
{
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
	}
}

void Xuat(double a[][200], int m, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(8) << a[i][j];
		}
		cout << endl;
	}
}