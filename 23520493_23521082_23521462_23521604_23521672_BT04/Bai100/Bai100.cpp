#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void nhap(int[][500], int&, int&);
void xuat(int[][500], int, int);
int ViTriDuongDau(int[], int);
int ViTriDuongNhoNhat(int[], int);
int TimChuSo(int[][500], int, int);

int main()
{
	int a[500][500];
	int k, l;
	nhap(a, k, l);
	cout << "Mang ban dau: \n";
	xuat(a, k, l);
	cout <<"chu so it xuat hien nhat: " << TimChuSo(a, k, l);
	return 0;
}

void nhap(int a[][500], int& m, int& n)
{
	cout << "nhap m:";
	cin >> m;
	cout << "nhap n:";
	cin >> n;
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

int ViTriDuongDau(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i] > 0)
			return a[i];
	return -1;
}

int ViTriDuongNhoNhat(int a[], int n)
{
	int lc = ViTriDuongDau(a, n);
	if (lc == -1)
		return -1;
	for (int i = 0; i < n; i++)
		if (a[i] > 0 && a[i] < lc)
			lc = i;
	return lc;
}

int TimChuSo(int a[][500], int m, int n)
{
	int dem[10] = { 0,0,0,0,0,0,0,0,0,0 };
	for(int i=0;i<m;i++)
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] == 0)
				dem[0]++;
			int t = abs(a[i][j]);
			while (t != 0)
			{
				int dv = t % 10;
				dem[dv]++;
				t = t / 10;
			}
		}
	return ViTriDuongNhoNhat(dem, 10);
}