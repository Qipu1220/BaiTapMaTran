#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][100], int&, int&);
void SapDongTang(float[][100], int, int, int);
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

void SapDongTang(float a[][100], int m, int n, int d)
{
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (a[d][i] > a[d][j])
				HoanVi(a[d][i], a[d][j]);
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
	int k, l,t ;
	Nhap(a, k, l);
	cout << "Nhap dong can sap xep : ";
	cin >> t;
	SapDongTang(a, k, l, t);
	return 0;
}