#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void Nhap(float[][200], int&, int&);
void Xuat(float[][200], int, int);
void DichXuongCot(float[][200], int, int, int);
void DichXuong(float[][200], int, int);

int main()
{
	float a[200][200];
	int m, n;
	Nhap(a, m, n);
	cout << "Mang ban dau:\n";
	Xuat(a, m, n);
	DichXuong(a, m, n);
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

void DichXuongCot(float a[][200], int m, int n, int c)
{
	float temp = a[m - 1][c];
	for (int i = m - 1; i >= 1; i--)
		a[i][c] = a[i - 1][c];
	a[0][c] = temp;
}

void DichXuong(float a[][200], int m, int n)
{
	for (int j = 0; j < n; j++)
		DichXuongCot(a, m, n, j);
}