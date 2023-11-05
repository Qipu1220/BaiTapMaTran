#include <iostream>
#include <iomanip>
using namespace std; 
void Nhap(float[][50], int&, int&);
void Xuat(float[][50], int, int);
void Xoay90(float[][50], int&, int&);

int main()
{
	float a[50][50];
	int m, n;
	Nhap(a, m, n);
	Xuat(a, m, n);
	Xoay90(a, m, n);
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

void Xoay90(float a[][50], int& m, int& n)
{
	float b[50][50];
	int k, l;
	k = n;
	l = m;
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < l; j++)
		{
			b[i][j] = a[j][n - 1 - i];
		}
	}
	m = k;
	n = l;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] = b[i][j];
		}
	}
}