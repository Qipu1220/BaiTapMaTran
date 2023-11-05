#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][500], int&, int&);
int TichCot(int[][500], int, int, int);
void Xuat(int[][500], int, int);

void Nhap(int a[][500], int& m, int& n) {
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
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << fixed << setw(4) << setprecision(1) << a[i][j];
		cout << endl;
	}
}
int TichCot(int a[][500], int m, int n, int c)
{
	int tich = 1;
	for (int i = 0; i < m; i++)
		if(a[i][c] % 2 == 0)
			tich = tich * a[i][c];
	return tich;
}
void Xuat(int a[][500], int m, int n, int c)
{
	cout << endl;
	cout << "Ma tran la: ";
	cout << endl;
	
	cout << endl;
	cout << "Tich la: ";
	cout << endl;
	cout << setw(4) << TichCot(a, m, n, c);
}
int main()
{
	int a[500][500];
	int m, n, c;
	Nhap(a, m, n);
	cout << "Nhap dong can tinh: ";
	cin >> c;
	TichCot(a, m, n, c);
	Xuat(a, m, n, c);
	return 0;
}