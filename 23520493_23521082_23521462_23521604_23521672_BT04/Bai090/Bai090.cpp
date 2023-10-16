#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void nhap(float a[][500], int& n, int& m);
void xuat(float a[][500], int n, int m);
float TongDong(float a[][500], int n, int m,int x);
float TongLonNhat(float a[][500], int n, int m);
void LietKe(float a[][500], int n, int m);

int main()
{
	float a[500][500];
	int k, l;
	nhap(a, k, l);
	cout << "Mang ban dau: \n";
	xuat(a, k, l);
	LietKe(a, k, l);
	return 0;
}

void nhap(float a[][500], int& n, int& m)
{
	cout << "nhap m:";
	cin >> m;
	cout << "nhap n:";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			a[i][j] = ((float)rand() / RAND_MAX) * (100 + 100) - 100;
	}
}

void xuat(float a[][500], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cout << setw(8) << fixed << setprecision(2) << a[i][j];
		cout << endl;
	}
	cout << "\n";
}

float TongDong(float a[][500], int n, int m,int x)
{
	float s = 0;
	for (int j = 0; j < m; j++)
	{
		s = s + a[x][j];
	}
	return s;
}

float TongLonNhat(float a[][500], int n, int m)
{
	float ln = TongDong(a, n, m, 0);
	for (int i = 0; i < n; i++)
	{
		if (TongDong(a, n, m, i) > ln)
			ln = TongDong(a, n, m, i);
	}
	return ln;
}

void LietKe(float a[][500], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		if (TongDong(a,n,m,i)==TongLonNhat(a,n,m))
			cout << "+" << i << ",";
	}
}