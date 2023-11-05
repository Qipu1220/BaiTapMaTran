#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][500], int&, int&);
int TongChan(int[][500], int, int);
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
}
int TongChan(int a[][500], int m, int n)
{
	int s = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] % 2 == 0)
				s = s + a[i][j];
	return s;
}
void Xuat(int a[][500], int m, int n)
{
	cout << setw(4) << TongChan(a, m, n);
}
int main()
{
	int a[500][500];
	int m, n;
	Nhap(a, m, n);
	Xuat(a, m, n);
	return 0;
}