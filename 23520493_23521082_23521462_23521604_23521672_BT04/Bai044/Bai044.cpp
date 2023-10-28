#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][500], int&, int&);
float TichCot(float[][500], int, int, int);
void Xuat(float[][500], int, int);

void Nhap(float a[][500], int& m, int& n) {
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
float TichCot(float a[][500], int m, int n, int c)
{
	float tich = 1;
	for (int i = 0; i < m; i++)
		if (a[i][c] >=-1 && a[i][c] <= 0)
			tich = tich * (float)a[i][c];
	return tich;
}
void Xuat(float a[][500], int m, int n, int c)
{
	cout << "Tich la: ";
	cout << endl;
	cout <<fixed<< setprecision(1) << TichCot(a, m, n, c);
}
int main()
{
	float a[500][500];
	int m, n, c;
	Nhap(a, m, n);
	cout << "Nhap dong can tinh: ";
	cin >> c;
	TichCot(a, m, n, c);
	Xuat(a, m, n, c);
	return 0;
}