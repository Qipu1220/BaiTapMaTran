#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
bool KTChinhPhuong(int);
int TongCot(int[][100], int, int,int);

int main()
{
	int b[100][100];
	int m, n, d;
	Nhap(b, m, n);
	Xuat(b, m, n);
	cout << "Nhap so cot can tinh: ";
	cin >> d;
	cout << "Tong cac so chinh phuong o cot " << d << " la: " << TongCot(b, m, n, d-1);
	return 0;
}

void Nhap(int a[][100], int& m, int& n)
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

void Xuat(int a[][100], int m, int n)
{
	cout << "Ma tran vua nhap: " << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(8) << a[i][j];
		cout << "\n";
	}
}

bool KTChinhPhuong(int n)
{
	for (int i = 1; i <= n / 2; i++)
	{
		if (i * i == n)
			return true;
	}
	return false;
}

int TongCot(int a[][100], int m, int n, int d)
{
	int s = 0;
	for (int i = 0; i < m; i++)
	{
		if (KTChinhPhuong(a[i][d]))
			s += a[i][d];
	}
	return s;
}