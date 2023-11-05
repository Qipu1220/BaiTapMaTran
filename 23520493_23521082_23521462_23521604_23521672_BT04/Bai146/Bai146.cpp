#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[][50], int&, int&);
void Xuat(float[][50], int, int);
int ktCot(float[][50], int, int, int);
void XoaCot(float[][50], int, int&, int);
void XoaCot(float[][50], int, int&);

int main()
{
	float a[50][50];
	int m, n, d;
	Nhap(a, m, n);
	Xuat(a, m, n);
	XoaCot(a, m, n);
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



int ktCot(float a[][50], int m, int n, int c)
{
	for (int i = 0; i < m; i++)
	{
		if (a[i][c] > 0)
			return 0;
	}
	return 1;
}

void XoaCot(float a[][50], int m, int& n, int c)
{
	for (int r = c; r <= n - 2; r++)
	{	
		for (int i = 0; i < m; i++)
		{
			a[i][r] = a[i][r + 1];
		}
	}
	n--;
}

void XoaCot(float a[][50], int m, int& n)
{
	for (int j = 0; j < m; j++)
	{
		if (ktCot(a, m, n, j) == 1)
		{
			XoaCot(a, m, n, j);
			j--;
			if (j == n-1)
				break;
		}
	}
}