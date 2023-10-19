#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
float TongCot(float[][100], int, int, int);
float TongNhoNhat(float[][100], int, int);
void LietKe(float[][100], int, int);

int main()
{
	float a[100][100];
	int m, n;
	Nhap(a, m, n);
	Xuat(a, m, n);
	cout << "Cac cot co tong nho nhat la: ";
	LietKe(a, m, n);
	return 0;
}

void Nhap(float a[][100], int& m, int& n)
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

void Xuat(float a[][100], int m, int n)
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

float TongCot(float a[][100], int m, int n, int c)
{
	int s = 0;
	for (int i = 0; i < m; i++)
	{
		s += a[i][c];
	}
	return s;
}

float TongNhoNhat(float a[][100], int m, int n)
{
	int lc = TongCot(a, m, n, 0);
	for (int j = 0; j < n; j++)
	{
		if (TongCot(a, m, n, j) < lc)
			lc = TongCot(a, m, n, j);
	}
	return lc;
}

void LietKe(float a[][100], int m, int n)
{
	float sln = TongNhoNhat(a, m, n);
	for (int j = 0; j < n; j++)
	{
		if (TongCot(a, m, n, j) == sln)
			cout << setw(8) << j+1;
	}
}