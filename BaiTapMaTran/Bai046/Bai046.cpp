#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[][200], int&, int&);
void Xuat(float[][200], int, int);
float TichDuong(float[][200], int, int);
int DemDuong(float[][200], int, int);
float TbnDuong(float[][200], int, int);

int main()
{
	float a[200][200];
	int m, n;
	Nhap(a, m, n);
	Xuat(a, m, n);
	cout << "Trung binh nhan cac so duong trong ma tran: " << TbnDuong(a, m, n);
	return 0;
}

void Nhap(float a[][200], int& m, int& n)
{
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
}

void Xuat(float a[][200], int m, int n)
{
	cout << "Ma tran vua nhap: ";
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(8) << a[i][j];
	}
}

float TichDuong(float a[][200], int m, int n)
{
	float t = 1;
	for (int i = 0; i < m ;i++)
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] > 0)
				t *= a[i][j];
		}
	return t;
}

int DemDuong(float a[][200], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] > 0)
				dem += 1;
		}
	}
	return dem;
}

float TbnDuong(float a[][200], int m, int n)
{
	float tbn = TichDuong(a, m, n) / DemDuong(a, m, n);
	return tbn;
}
