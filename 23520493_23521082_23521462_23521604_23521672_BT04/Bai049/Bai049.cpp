#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void Nhap(int[][500], int&, int&);
int Tong5m(int[][500], int, int);
void Xuat(int[][500], int, int);

void Nhap(int a[][500], int& m, int& n) {
	cout << "Nhap m: ";
	cin >> m;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "]= ";
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << fixed << setw(4) << setprecision(1) << a[i][j];
		cout << endl;
	}
}
bool KT5m(int n) {
	float m = log2(n) / log2(5);
	if (m == int(m))
		return true;
	return false;
}
int Tong5m(int a[][500], int m, int n)
{
	int sum = 0;

	for (int i = 0; i < m; i++) 
	{
		for (int j = 0; j < n; j++) 
		{
			if (i == 0 || i == m - 1 || j == 0 || j == n - 1)
			{
				if (KT5m(a[i][j]))
					sum += a[i][j];
			}
			
		}
	}
	return sum;
}
void Xuat(int a[][500], int m, int n)
{
	cout << "Tong la: ";
	cout << endl;
	cout << fixed << setprecision(1) << Tong5m(a, m, n);
}
int main()
{
	int a[500][500];
	int m, n;
	Nhap(a, m, n);
	Tong5m(a, m, n);
	Xuat(a, m, n);
	return 0;
}