#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void Nhap(float[][200], int&, int&);
void Xuat(float[][200], int, int);
void DaoCot(float[][200], int, int, int);
void ChieuGuongNgang(float[][200], int, int);

int main()
{
	float a[200][200];
	int m, n;
	Nhap(a, m, n);
	cout << "Mang ban dau:\n";
	Xuat(a, m, n);
	ChieuGuongNgang(a, m, n);
	cout << "\nMang sau khi chieu guong: \n";
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

void DaoCot(float a[][200], int m, int n, int c)
{
	int dd = 0;
	int cc = m - 1;
	while (dd < cc)
	{
		float temp = a[dd][c];
		a[dd][c] = a[cc][c];
		a[cc][c] = temp;
		dd++;
		cc--;
	}
}

void ChieuGuongNgang(float a[][200], int m, int n)
{
	for (int j = 0; j < n; j++)
		DaoCot(a, m, n, j);
}