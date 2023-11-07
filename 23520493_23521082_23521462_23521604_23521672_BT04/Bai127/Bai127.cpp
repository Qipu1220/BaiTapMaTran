#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][100], int&, int&);
void SapCotTang(float[][100], int, int, int);
void SapCotGiam(float[][100], int, int, int);
void SapXep(float[][100], int, int);
void HoanVi(float, float);

void Nhap(float a[][100], int& m, int& n)
{
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
}

void SapCotTang(float a[][100], int m, int n, int c)
{
	for (int i = 0; i <= m - 2; i++)
		for (int j = i + 1; j <= m - 1; j++)
			if (a[i][c] > a[j][c])
				HoanVi(a[i][c], a[j][c]);
}

void SapCotGiam(float a[][100], int m, int n, int c)
{
	for (int i = 0; i <= m - 2; i++)
		for (int j = i + 1; j <= m - 1; j++)
			if (a[i][c] < a[j][c])
				HoanVi(a[i][c], a[j][c]);
}

void SapXep(float a[][100], int m, int n)
{
	for (int j = 0; j <= n - 1; j++)
		if (j % 2 == 0)
			SapCotGiam(a, m, n, j);
		else
			SapCotTang(a, m, n, j);
}


void HoanVi(float m, float n)
{
	float t = m;
	m = n;
	n = t;
}


int main()
{
	float a[100][100];
	int k, l;
	Nhap(a, k, l);
	SapXep(a, k, l);
	return 0;
}