#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void Nhap(int[][100], int&, int&);

void Nhap(int a[][100], int& m, int& n) {
	cout << "Nhap m: ";
	cin >> m;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "]= ";
			cin >> a[i][j];
		}
	}
	cout << "Ma tran ban dau la: " << endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++)
			cout << fixed << setw(4) << setprecision(1) << a[i][j] << " ";
		cout << endl;

	}
}
void LietKe(int a[][100], int m, int n)
{

	for (int j = 0; j < n; j++)
	{
		int ln = -1e6;
		for (int i = 0; i < m; i++)
		{
			if (a[i][j] > ln)
			{
				ln = a[i][j];
				a[m][j] = ln;
			}
		}
	}
}
void Xuat(int a[][100], int& m, int n)
{
	for (int i = 0; i < m+1; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
int main()
{
	int a[100][100];
	int m, n;
	Nhap(a, m, n);
	LietKe(a, m, n);
	Xuat(a, m, n);
	return 0;
}