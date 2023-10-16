#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void nhap(int a[][500], int& n, int& m);
void xuat(int a[][500], int n, int m);
void LietKe(int a[][500], int n, int m,int& h);

int main()
{
	int a[500][500];
	int k, l, z;
	nhap(a, k, l);
	cout << "Mang ban dau: \n";
	xuat(a, k, l);
	LietKe(a, k, l, z);
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

void LietKe(int a[][500], int n, int m, int& h)
{
	cout << "\nNhap hang muon xet: ";
	cin >> h;
	if (h > n)
		cout << "hang bi loi";
	cout << "\nLiet ke: \n";
	for (int j = 0; j < m; j++)
	{
		if (a[h][j] % 2 == 0)
				cout << setw(8) << a[h][j];
	}
}