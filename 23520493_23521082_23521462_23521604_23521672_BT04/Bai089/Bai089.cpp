#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][500], int&, int&);
float TongCot(float[][500], int, int, int);
float TongNhoNhat(float[][500], int, int);
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
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
float TongCot(float a[][500], int m, int n, int c) {
	float s = 0;
	for (int i = 0; i < m; i++)
	{
			s = s + a[i][c];
	}
	return s;
}
float TongNhoNhat(float a[][500], int m, int n)
{
	float nn = TongCot(a, m, n, 0);
	for (int j = 0; j < n; j++)
		if (TongCot(a, m, n, j) < nn)
			nn = TongCot(a, m, n, j);
	return nn;
}
void Xuat(float a[][500], int m, int n)
{
	cout << TongNhoNhat(a, m, n);
}
int main()
{
	float a[500][500];
	int m, n, c;
	Nhap(a, m, n);
	Xuat(a, m, n);
	return 0;
}