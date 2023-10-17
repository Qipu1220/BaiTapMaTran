#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void nhap(float a[][500], int& m, int& n);
void xuat(float a[][500], int m, int n);
float TongDong(float a[][500], int m, int n,int x);
float TongLonNhat(float a[][500], int m, int n);
void LietKe(float a[][500], int m, int n);

int main()
{
	float a[500][500];
	int k, l;
	nhap(a, k, l);
	cout << "Mang ban dau: \m";
	xuat(a, k, l);
	LietKe(a, k, l);
	return 0;
}

void nhap(float a[][500], int& m, int& n)
{
	cout << "nhap n:";
	cin >> n;
	cout << "nhap m:";
	cin >> m;
	srand(time(NULL));
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			a[i][j] = ((float)rand() / RAND_MAX) * (100 + 100) - 100;
	}
}

void xuat(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(8) << fixed << setprecision(2) << a[i][j];
		cout << endl;
	}
	cout << "\m";
}

float TongDong(float a[][500], int m, int n,int x)
{
	float s = 0;
	for (int j = 0; j < n; j++)
	{
		s = s + a[x][j];
	}
	return s;
}

float TongLonNhat(float a[][500], int m, int n)
{
	float ln = TongDong(a, m, n, 0);
	for (int i = 0; i < m; i++)
	{
		if (TongDong(a, m, n, i) > ln)
			ln = TongDong(a, m, n, i);
	}
	return ln;
}

void LietKe(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		if (TongDong(a,m,n,i)==TongLonNhat(a,m,n))
			cout << "+" << i << ",";
	}
}