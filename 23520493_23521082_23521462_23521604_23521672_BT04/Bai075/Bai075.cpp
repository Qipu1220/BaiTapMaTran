#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void nhap(float a[][500], int& m, int& n);
void xuat(float a[][500], int m, int n);
float DuongDau(float a[][500], int m, int n);

int main()
{
	float a[500][500];
	int k, l;
	nhap(a, k, l);
	cout << "Mang ban dau: \m";
	xuat(a, k, l);
	cout << "\nSo duong dau tien: " << DuongDau(a, k, l);
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
}

float DuongDau(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] > 0)
				return a[i][j];
		}
	}
	return -1;
}