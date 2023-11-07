#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][100], int&, int&);
void XayDung(float[][100], int, int, float[][100], int&, int&);

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

void XayDung(float a[][100], int m, int n, float b[][100], int& k, int& l)
{
	k = m;
	l = n;
	for (int i = 0; i < k; i++)
		for (int j = 0; j < l; j++)
			b[i][j] = abs(a[i][j]);
}

int main()
{
	float a[100][100], b[100][100];
	int k, l, m, n;
	Nhap(a, k, l);
	XayDung(a, k, l, b, m, n);
	return 0;
}