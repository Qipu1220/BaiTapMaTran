#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void nhap(int a[][500], int& m, int& n);
void xuat(int a[][500], int m, int n);
void LietKe(int a[][500], int m, int n,int& h);

int main()
{
	int a[500][500];
	int k, l, z;
	nhap(a, k, l);
	cout << "Mang ban dau: \m";
	xuat(a, k, l);
	LietKe(a, k, l, z);
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

void LietKe(int a[][500], int m, int n, int& h)
{
	cout << "\nNhap hang muon xet: ";
	cin >> h;
	if (h > m)
		cout << "hang bi loi";
	cout << "\nLiet ke: \m";
	for (int j = 0; j < n; j++)
	{
		if (a[h][j] % 2 == 0)
				cout << setw(8) << a[h][j];
	}
}