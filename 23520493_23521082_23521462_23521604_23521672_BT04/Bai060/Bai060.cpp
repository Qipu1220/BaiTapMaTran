#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void nhap(int a[][500], int& m, int& n);
void xuat(int a[][500], int m, int n);
int DemDuongDong(int a[][500], int m, int n, int x);

int main()
{
	int a[500][500];
	int k, l;
	nhap(a, k, l);
	cout << "Mang ban dau: \m";
	xuat(a, k, l);
	int d;
	cout << "Nhap hang: ";
	cin >> d;
	cout << "\nSo luong so duong: " << DemDuongDong(a, k, l, d);
	return 0;
}

void nhap(int a[][500], int& m, int& n)
{
	cout << "nhap n:";
	cin >> n;
	cout << "nhap m:";
	cin >> m;
	srand(time(NULL));
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			a[i][j] = rand() % (200 + 1) - 100;
	}
}

void xuat(int a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(8) << a[i][j];
		cout << endl;
	}
}

int DemDuongDong(int a[][500], int m, int n, int x)
{
	if (x > n)
	{
		cout << "Hang bi loi";
		return 0;
	}
	int dem = 0;

	for (int j = 0; j <n; j++)
	{
		if (a[x][j] % 2 != 0)
			dem++;
	}

	return dem;
}