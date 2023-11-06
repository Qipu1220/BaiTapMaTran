#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][100], int& m, int& n);
int TongBien(float[][100], int, int);

void Nhap(float a[][100], int& m, int& n)
{
	cout << "Nhap m : ";
	cin >> m;
	cout << "Nhap n : ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "]" << "[" << j << "] : ";
			cin >> a[i][j];
		}
}

int TongBien(float a[][100], int m, int n)
{
	float s = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (i == 0 || i == (m - 1) || j == 0 || j == (n - 1))
				s = s + a[i][j];
	return s;
}

int main()
{
	float a[100][100];
	int k, l;
	Nhap(a, k, l);
	cout << "Tong la : " << TongBien(a, k, l);
	return 0;
}