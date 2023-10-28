#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][500], int&, int&);
int SoLuong(float[][500], int, int);
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
}
int SoLuong(float a[][500], int m, int n) {
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] > 0)
				dem++;
	return dem;
}
void Xuat(float a[][500], int m, int n)
{
	cout << endl;
	cout << "Ma tran la: ";
	cout << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << fixed << setw(4) << setprecision(1) << a[i][j];
		cout << endl;
	}
	cout << endl;
	cout << "So luong so duong la: ";
	cout << endl;
	cout << setw(4) << SoLuong(a, m, n);
}
int main()
{
	float a[500][500];
	int m, n;
	Nhap(a, m, n);
	Xuat(a, m, n);
	return 0;
}