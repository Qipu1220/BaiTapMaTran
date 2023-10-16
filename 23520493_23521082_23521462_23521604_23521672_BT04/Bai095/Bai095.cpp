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
	cout << "Mang ban dau: \n";
	xuat(a, k, l);
	cout << "\nLiet ke cac cot nhieu chu so nhat: ";
	LietKe(a, k, l);
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

int DemCot(int a[][500], int n, int m, int x)
{
	int s = 0;
	for (int i = 0; i < n; i++)
		s = s + DemChuSo(a[i][x]);
	return s;
}

int DemLonNhat(int a[][500], int n, int m)
{
	int ln = DemCot(a, n, m, 0);
	for (int j = 0; j < m; j++)
	{
		if (DemCot(a, n, m, j) > ln)
			ln = DemCot(a, n, m, j);
	}
	return ln;
}

void LietKe(int a[][500], int n, int m)
{

	int ln = DemLonNhat(a, n, m);
	for (int j = 0; j < m; j++)
	{
		if (DemCot(a, n, m, j) == ln)
			cout << j << ", ";
	}
}