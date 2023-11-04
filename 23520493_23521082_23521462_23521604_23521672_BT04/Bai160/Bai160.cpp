#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void Nhap(float[][200], int&, int&);
void Xuat(float[][200], int, int);
void DichTrai(float[200], int);
void DichTraiBien(float[][200], int, int);

int main()
{
	float a[200][200];
	int m, n;
	Nhap(a, m, n);
	cout << "Mang ban dau:\n";
	Xuat(a, m, n);
	DichTraiBien(a, m, n);
	cout << "\nMang sau khi dich: \n";
	Xuat(a, m, n);
	return 0;
}

void Nhap(float a[][200], int& m, int& n)
{
	cout << "Nhap m:";
	cin >> m;
	cout << "Nhap n:";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			a[i][j] = ((float)rand() / RAND_MAX) * (100 + 100) - 100;
		}
}

void Xuat(float a[][200], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(8) << fixed << setprecision(2) << a[i][j];
		}
		cout << endl;
	}
}

void DichTrai(float a[], int n)
{
	float temp = a[0];
	for (int i = 0; i <= n - 2; i++)
		a[i] = a[i + 1];
	a[n - 1] = temp;
}

void DichTraiBien(float a[][200], int m, int n)
{
	float b[200];
	int k = 0;
	for (int j = 0; j <= n - 1; j++)
		b[k++] = a[0][j];
	for (int i = 1; i <= m - 2; i++)
		b[k++] = a[i][n - 1];
	for (int j = n - 1; j >= 0; j--)
		b[k++] = a[m - 1][j];
	for (int i = m - 2; i >= 1; i--)
		b[k++] = a[i][0];
	DichTrai(b, k);
	k = 0;
	for (int j = 0; j <= n - 1; j++)
		a[0][j] = b[k++];
	for (int i = 1; i <= m - 2; i++)
		a[i][n - 1] = b[k++];
	for (int j = n - 1; j >= 0; j--)
		a[m - 1][j] = b[k++];
	for (int i = m - 2; i >= 1; i--)
		a[i][0] = b[k++];
}