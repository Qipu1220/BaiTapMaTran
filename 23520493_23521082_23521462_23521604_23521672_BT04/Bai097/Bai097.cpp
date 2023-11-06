#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][100], int& m, int& n);
float LonNhatDong(float[][100], int, int, int);
float NhoNhatDong(float[][100], int, int, int);
float LonNhatCot(float[][100], int, int, int);
float NhoNhatCot(float[][100], int, int, int);
int ktYenNgua(float[][100], int, int, int, int);
int DemYenNgua(float[][100], int, int);

void Nhap(float a[][100], int& m, int& n)
{
	cout << "Nhap m : ";
	cin >> m;
	cout << "Nhap n : ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "]" << "[" << j << "] : ";
			cin >> a[i][j];
		}
}

float LonNhatDong(float a[][100], int m, int n, int d)
{
	float lc = a[d][0];
	for (int j = 0; j < n; j++)
		if (a[d][j] > lc)
			lc = a[d][j];
	return lc;
}

float NhoNhatDong(float a[][100], int m, int n, int d)
{
	float lc = a[d][0];
	for (int j = 0; j < n; j++)
		if (a[d][j] < lc)
			lc = a[d][j];
	return lc;
}

float LonNhatCot(float a[][100], int m, int n, int c)
{
	float lc = a[0][c];
	for (int i = 0; i < m; i++)
		if (a[i][c] > lc)
			lc = a[i][c];
	return lc;
}

float NhoNhatCot(float a[][100], int m, int n, int c)
{
	float lc = a[0][c];
	for (int i = 0; i < m; i++)
		if (a[i][c] < lc)
			lc = a[i][c];
	return lc;
}

int ktYenNgua(float a[][100], int m, int n, int d, int c)
{
	float lnd = LonNhatDong(a, m, n, d);
	float nnc = NhoNhatCot(a, m, n, c);
	float lnc = LonNhatCot(a, m, n, c);
	float nnd = NhoNhatDong(a, m, n, d);
	if ((a[d][c] == lnd && a[d][c] == nnc) ||
		(a[d][c] == lnc && a[d][c] == nnd))
		return 1;
	return 0;
}

int DemYenNgua(float a[][100], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktYenNgua(a, m, n, i, j) == 1)
				dem++;
	return dem;
}


int main()
{
	float a[100][100];
	int k, l;
	Nhap(a, k, l);
	cout << "So cac so Yen Ngua la : " << DemYenNgua(a, k, l);
	return 0;
}