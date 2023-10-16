#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void nhap(int a[][500], int& n, int& m);
void xuat(int a[][500], int n, int m);
int SoDauTien(int x);
int DemGiaTri(int a[][500], int n, int m, int x);

int main()
{
	int a[500][500];
	int k, l;
	nhap(a, k, l);
	cout << "Mang ban dau: \n";
	xuat(a, k, l);
	int d;
	cout << "Nhap cot: ";
	cin >> d;
	cout << "\nSo luong la: " << DemGiaTri(a, k, l, d);
	return 0;
}

void nhap(int a[][500], int& n, int& m)
{
	cout << "nhap m:";
	cin >> m;
	cout << "nhap n:";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			a[i][j] = rand() % (200 + 1) - 100;
	}
}

void xuat(int a[][500], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cout << setw(8) << a[i][j];
		cout << endl;
	}
}

int SoDauTien(int x)
{
	int a = x;
	int dt = 0;
	while (a != 0)
	{
		dt = a % 10;
		a = a / 10;
	}
	return dt;
}

int DemGiaTri(int a[][500], int n, int m, int x)
{
	if (x > m - 1)
		cout << "Cot bi loi";
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (SoDauTien(a[i][x]) % 2 == 0)
			dem++;
	}
	return dem;
}