#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
float LonNhat(float[][100], int, int);
float NhoNhat(float[][100], int, int);
float LonNhi(float[][100], int, int);

int main()
{
	float a[100][100];
	int m, n;
	Nhap(a, m, n);
	Xuat(a, m, n);
	cout << "Gia tri lon nhi cua ma tran: " << LonNhi(a, m, n);
	return 0;
}


void Nhap(float a[][100], int& m, int& n)
{
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i=0; i < m;i++)
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
}

void Xuat(float a[][100], int m, int n)
{
	cout << "Ma tran vua nhap: " << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout <<setw(8)<< a[i][j];
		}
		cout << endl;
	}
}


float LonNhat(float a[][100], int m, int n)
{
	float lc = a[0][0];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			if (a[i][j] > lc)
				lc = a[i][j];
	}
	return lc;
}

float NhoNhat(float a[][100], int m, int n)
{
	float lc = a[0][0];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			if (a[i][j] < lc)
				lc = a[i][j];
	}
	return lc;
}

float LonNhi(float a[][100], int m, int n)
{
	float lc = LonNhat(a, m, n) - NhoNhat(a, m, n);
	float lc1 = a[0][0];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (LonNhat(a, m, n) - a[i][j] < lc && a[i][j]!= LonNhat(a,m,n))
				lc1 = a[i][j];
		}
	}
	return lc1;
}