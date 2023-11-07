#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][100], int&, int&);
void ThemDong(float a[][100], int& m, int n, int d);

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

void ThemDong(float a[][100], int& m, int n, int d)
{
	for (int i = m; i > d; i--)
		for (int j = 0; j < n; j++)
			a[i][j] = a[i - 1][j];
	for (int j = 0; j < n; j++)
		a[d][j] = 1;
	m++;
}

int main()
{
	float a[100][100];
	int k, l, t;
	Nhap(a, k, l);
	cout << " Nhap dong  : ";
	cin >> t;
	ThemDong(a, k, l, t);
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < l; j++)
			cout << setw(3) << a[i][j];
		cout << endl;
	}
	return 0;
}