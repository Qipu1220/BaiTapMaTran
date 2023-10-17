#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void nhap(int [][500], int&, int&);
void xuat(int [][500], int, int);
int DemChuSo(int );
int DemCot(int [][500], int , int , int );
int DemLonNhat(int [][500], int , int );
void LietKe(int [][500], int , int );

int main()
{
	int a[500][500];
	int k, l;
	nhap(a, k, l);
	cout << "Mang ban dau: \m";
	xuat(a, k, l);
	cout << "\nLiet ke cac cot nhieu chu so nhat: ";
	LietKe(a, k, l);
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

int DemChuSo(int x)
{
	int dem = 0;
	int a = x;
	while (a != 0)
	{
		dem++;
		a = a / 10;
	}
	return dem;
}

int DemCot(int a[][500], int m, int n, int x)
{
	int s = 0;
	for (int i = 0; i < m; i++)
		s = s + DemChuSo(a[i][x]);
	return s;
}

int DemLonNhat(int a[][500], int m, int n)
{
	int ln = DemCot(a, m, n, 0);
	for (int j = 0; j < n; j++)
	{
		if (DemCot(a, m, n, j) > ln)
			ln = DemCot(a, m, n, j);
	}
	return ln;
}

void LietKe(int a[][500], int m, int n)
{

	int ln = DemLonNhat(a, m, n);
	for (int j = 0; j < n; j++)
	{
		if (DemCot(a, m, n, j) == ln)
			cout << j << ", ";
	}
}