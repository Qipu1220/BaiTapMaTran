#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][500], int&, int&);
int TanSuat(float[][500], int, int, float);
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
int TanSuat(float a[][500], int m, int n, float x) {
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] == x)
				dem = dem + 1;
	return dem;
}
void Xuat(float a[][500], int m, int n, float x)
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
	cout << "So tan suat la la: ";
	cout << endl;
	cout << setw(4) << TanSuat(a, m, n, x);
}
int main()
{
	float a[500][500];
	int m, n;
	float x;
	Nhap(a, m, n);
	cout << "Nhap vao gia tri x: ";
	cin >> x;
	Xuat(a, m, n, x);
	return 0;
}