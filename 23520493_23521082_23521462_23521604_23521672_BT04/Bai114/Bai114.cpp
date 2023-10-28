#include <iostream>
#include <iomanip>
#include <cmath>
#define max 100
using namespace std;

void Nhap(int[][max], int&, int&);
bool KT(int);
void LietKe(int[][max], int, int);

void Nhap(int a[][max], int& m, int& n) {
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
bool KT(int k)
{
	for (int i = 2; i * i <= k; i++) 
	{
		if (k % i == 0) 
		{
			return true;
		}
	}
	return false;
}
void LietKe(int a[][max], int m, int n)
{
	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < m; i++)
		{
			if (KT(a[i][j]))
			{
				cout << j << " ";
				break;
			}
		}
	}
}
int main()
{
	int a[max][max];
	int m, n;
	Nhap(a, m, n);
	LietKe(a, m, n);
	return 0;
}