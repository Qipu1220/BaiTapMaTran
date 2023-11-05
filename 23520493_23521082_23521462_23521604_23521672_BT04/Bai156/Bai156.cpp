#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[][50], int&, int&);
void Xuat(float[][50], int, int);
void DichHangLen(float[][50], int, int, int);
void DichHang(float[][50], int, int);

int main()
{
	float a[50][50];
	int m, n;
	Nhap(a, m, n);
	Xuat(a, m, n);
	DichHang(a, m, n);
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

void DichHangLen(float a[][50], int m, int n, int c)
{
	float temp = a[0][c];
	for (int i = 0; i < m - 1; i++)
	{
		a[i][c] = a[i + 1][c];
	}
	a[m - 1][c] = temp;
}

void DichHang(float a[][50], int m, int n)
{
	for (int j = 0; j < n; j++)
	{
		DichHangLen(a, m, n, j);
	}
}