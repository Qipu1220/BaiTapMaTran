#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[][50], int&, int&);
void Xuat(float[][50], int, int);
void HoanVi(float&, float&);
void SapDongGiam(float[][50], int, int, int);
void SapDongTang(float[][50], int, int, int);
void SapXep(float[][50], int, int);

int main()
{
	float a[50][50];
	int m, n;
	Nhap(a , m, n);
	Xuat(a, m, n);
	SapXep(a, m, n);
	Xuat(a, m, n);
	return 0;
}

void Nhap(float a[][50], int& m, int& n)
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so hang: ";
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
	cout << "Ma tran da nhap: " << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(8) << a[i][j];
		}
		cout << endl;
	}
}

void HoanVi(float& m, float& n)
{
	float temp = m;
	m = n;
	n = temp;
}

void SapDongGiam(float a[][50], int m, int n, int d)
{
	for (int i = 0; i <= n - 2; i++)
	{
		for (int j = i + 1; j <= n - 1; j++)
			if (a[d][i] < a[d][j])
				HoanVi(a[d][i], a[d][j]);
	}
}

void SapDongTang(float a[][50], int m, int n, int d)
{
	for (int i = 0; i<=n-2; i++)
	{
		for (int j = i + 1; j <= n - 1; j++)
			if (a[d][i] > a[d][j])
				HoanVi(a[d][i], a[d][j]);
	}
}

void SapXep(float a[][50], int m, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
			SapDongTang(a, m, n, i);
		else
			SapDongGiam(a, m, n, i);
	}
}