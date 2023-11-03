#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void Nhap(float[][500], int&, int&);
void Xuat(float[][500], int, int);
void HoanVi(float&, float&);
void SapTangZicZac(float[][500], int, int);

int main()
{
	float a[500][500];
	int m, n;
	Nhap(a, m, n);
	cout << "Mang ban dau:\n";
	Xuat(a, m, n);
	SapTangZicZac(a, m, n);
	cout << "\nXuat tang theo ziczac: \n";
	Xuat(a, m, n);
	return 0;
}

void Nhap(float a[][500], int& m, int& n)
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

void Xuat(float a[][500], int m, int n)
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

void HoanVi(float& x, float& y)
{
	float m = 0;
	m = x;
	x = y;
	y = m;
}

void SapTangZicZac(float a[][500], int m, int n)
{
	float b[500];
	int k;

	k = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			b[k++] = a[i][j];
		}

	for (int i = 0; i <= k - 2; i++)
		for (int j = i + 1; j <= k - 1; j++)
		{
			if (b[i] > b[j])
				HoanVi(b[i], b[j]);
		}

	k = 0;
	for (int i = 0; i < m; i++)
	{
		if (i % 2 == 0)
		{
			for (int j = 0; j < n; j++)
				a[i][j] = b[k++];
		}
		else
		{
			for (int j = n - 1; j >= 0; j--)
				a[i][j] = b[k++];
		}
	}
}