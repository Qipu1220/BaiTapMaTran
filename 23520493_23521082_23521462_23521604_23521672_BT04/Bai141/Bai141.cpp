#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[][50], int&, int&);
void Xuat(float[][50], int, int);
void XoaDong(float[][50], int&, int, int&);

int main()
{
	float a[50][50];
	int m, n, d;
	Nhap(a, m, n);
	Xuat(a, m, n);
	XoaDong(a,m, n, d);
	Xuat(a, m, n);
	return 0;
}


void Nhap(float a[][50], int& m, int& n)
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

void Xuat(float a[][50], int m, int n)
{
	cout << "Ma tran: " << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(8) << a[i][j];
		}
		cout << endl;
	}
}

void XoaDong(float a[][50], int& m, int n, int& d)
{
	cout << "Nhap dong can xoa: ";
	cin >> d;
	for (int i = d; i <= m - 2; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] = a[i+1][j];
		}
		
	}
	m--;
}