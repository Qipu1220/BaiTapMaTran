#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][500], int&, int&);
int TongDong(int[][500], int, int,int);
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
int TongDong(int a[][500], int m, int n, int l)
{
	double sum = 0;
	for (int j = 0; j < n; j++)
		sum = sum + a[l][j];
	return sum;
}
void Xuat(int a[][500], int m, int n, int l)
{
	cout << endl;
	cout << endl;
	cout << "Ma tran la: ";
	cout << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << fixed << setw(4) << setprecision(1) << a[i][j];
			cout << endl;
	}
	cout << endl;
	cout << "Tong la: ";
	cout << endl;
	cout << setw(4) << TongDong(a, m, n,l);
}
int main()
{
	int a[500][500];
	int m, n, l ;
	Nhap(a, m, n);
	cout << "Nhap dong can tinh: ";
	cin >> l;
	Xuat(a, m, n, l);
	return 0;
}