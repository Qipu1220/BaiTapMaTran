#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void Nhap(int[][500], int&, int&);
void Xuat(int[][500], int, int);
int ktDong(int[][500], int, int, int);
void XoaMotDong(int[][500], int&, int, int, int);
void XoaDong(int[][500], int&, int);

int main()
{
	int a[500][500];
	int m, n;
	Nhap(a, m, n);
	cout << "Mang ban dau:\n";
	Xuat(a, m, n);
	XoaDong(a, m, n);
	cout << "\nMang sau khi xoa: \n";
	Xuat(a, m, n);
	return 0;
}

void Nhap(int a[][500], int& m, int& n)
{
	cout << "Nhap m:";
	cin >> m;
	cout << "Nhap n:";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
}

void Xuat(int a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(8) << fixed << setprecision(2) << a[i][j];
		}
		cout << endl;
	}
}

int ktDong(int a[][500], int m, int n, int d)
{
	int flag = 1;
	for (int j = 0; j < n; j++)
		if (a[d][j] % 2 != 0)
			flag = 0;
	return flag;
}

void XoaMotDong(int a[][500], int& m, int n, int d)
{
	for (int j = 0; j < n; j++)
	{
		for (int i = d; i <= m - 2; i++)
			a[i][j] = a[i + 1][j];
	}
	m--;
}

void XoaDong(int a[][500], int& m, int n)
{
	for(int i=0;i<m;i++)
		while (ktDong(a, m, n, i) == 1)
		{
			XoaMotDong(a,m,n,i);
		}
}