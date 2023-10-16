#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[][200], int&, int&);
void Xuat(float[][200], int, int);
float TongDong(float[][200], int, int,int);


int main()
{
	float a[200][200];
	int m, n, x;
	Nhap(a, m, n);
	Xuat(a, m, n);
	cout << "Nhap dong can tinh tong: ";
	cin >> x;
	cout << "Tong cac so tren dong " << x << " la: " << TongDong(a, m, n, x-1);
	return 0;
}

void Nhap(float a[][200], int& m, int& n)
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

void Xuat(float a[][200], int m, int n)
{
	cout << "Ma tran moi nhap: ";
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(8) << a[i][j];
		cout << endl;
	}
}

float TongDong(float a[][200], int m, int n, int d)
{
	float s = 0;
	for (int j = 0; j < n; j++)
	{
		s += a[d][j];
	}
	return s;
}