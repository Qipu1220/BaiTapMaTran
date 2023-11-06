#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][100], int& m, int& n);
int TongDuong(int[][100], int, int, int);

void Nhap(int a[][100], int& m, int& n)
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

int TongDuong(int a[][100], int m, int n, int k)
{
	int s = 0;
		for (int j = 0; j < n; j++)
			if (a[k][j]>0 )
				s = s + a[k][j];
	return s;
}

int main()
{
	int a[100][100];
	int k, l,t;
	cout << "Nhap hang : ";
	cin >> t;
	Nhap(a, k, l);
	cout << "Tong la : " << TongDuong(a, k, l, t);
	return 0;
}