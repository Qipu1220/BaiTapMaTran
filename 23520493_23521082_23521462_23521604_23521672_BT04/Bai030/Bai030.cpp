#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void nhap(float a[][500], int& n, int& m);
void xuat(float a[][500], int n, int m);
float TongDuong(float a[][500], int n, int m);

int main()
{
	float a[500][500];
	int k, l;
	nhap(a, k, l);
	cout << "Mang ban dau: \n";
	xuat(a, k, l);
	cout << "\nTong cac so duong: " << TongDuong(a, k, l);
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
			a[i][j] = ((float) rand() / RAND_MAX) * (100 + 100) - 100;
	}
}

void xuat(float a[][500], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cout << setw(8) <<fixed <<setprecision(2)<< a[i][j];
		cout << endl;
	}
}

float TongDuong(float a[][500], int n, int m)
{
	float s = 0;
	for (int i = 0; i < n; i ++)
	{
		for (int j = 0; j < m; j++)
		{
			if (a[i][j]>0)
				s = s + a[i][j];
		}
	}
	return s;
}