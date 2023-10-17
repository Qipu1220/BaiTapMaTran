#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void nhap(int a[][500], int& m, int& n);
void xuat(int a[][500], int m, int n);
bool ktSodx(int x);
int TongDong(int a[][500], int m, int n,int x);

int main()
{
	int a[500][500];
	int k, l;
	nhap(a, k, l);
	cout << "Mang ban dau: \m";
	xuat(a, k, l);
	int d;
	cout << "Nhap dong: ";
	cin >> d;
	cout << "\nTong cac so doi xung: " << TongDong(a, k, l, d);
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

bool ktSodx(int x)
{
	int a = x;
	int dn = 0;
	while (a != 0)
	{
		dn = dn * 10 + a % 10;
		a = a / 10;
	}
	if (dn == x)
		return true;
	return false;
}

int TongDong(int a[][500], int m, int n,int x)
{
	if (x > m)
	{
		cout << "Hang bi loi";
		return 0;
	}
	int s = 0;

	for (int j = 0; j < n; j++)
	{
		if (ktSodx(a[x][j]))
			s = s+ a[x][j];
	}

	return s;
}