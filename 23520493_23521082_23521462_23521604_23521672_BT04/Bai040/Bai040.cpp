#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void nhap(int a[][500], int& n, int& m);
void xuat(int a[][500], int n, int m);
int TongCot(int a[][500], int n, int m, int x);

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
	cout << "\nTong cac so le: " << TongCot(a, k, l, d);
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

int TongCot(int a[][500], int n, int m, int x)
{
	if (x > m)
	{
		cout << "Cot bi loi";
		return 0;
	}
	int s = 0;

	for (int i = 0; i < n; i++)
	{
		if (a[i][x]%2!=0)
			s = s + a[i][x];
	}

	return s;
}