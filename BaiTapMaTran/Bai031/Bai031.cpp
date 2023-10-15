#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[][200], int&, int&);
void Xuat(float[][200], int, int);
float TongAm(float[][200], int, int);


int main()
{
	float a[200][200];
	int m, n;
	Nhap(a, m, n);
	Xuat(a, m, n);
	cout << "Tong cac phan tu co gia tri am: " <<fixed<<setprecision(2)<< TongAm(a, m, n);
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
			cin >> a[i][j];
}

void Xuat(float a[][200], int m, int n)
{
	cout << "Ma tran vua nhap: " << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(8) << a[i][j];
		cout << endl;
	}
}

float TongAm(float a[][200], int m, int n)
{
	float s = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] < 0)
				s += a[i][j];
		}
	}
	return s;
}