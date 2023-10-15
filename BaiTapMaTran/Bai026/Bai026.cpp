#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int[][200], int&, int&);
void Xuat(int[][200], int, int);
bool KTChinhPhuong(int);
int TongChinhPhuong(int[][200], int, int);

int main()
{
	int a[200][200];
	int m, n;
	Nhap(a, m, n);
	Xuat(a, m, n);
	cout << "Tong cac so chinh phuong tren cot co chi so le: " << TongChinhPhuong(a, m, n);
	return 0;
}

void Nhap(int a[][200], int& m, int& n)
{
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}

void Xuat(int a[][200], int m, int n)
{
	cout << "Ma tran vua nhap: ";
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(8) << a[i][j];
		cout << endl;
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

int TongChinhPhuong(int a[][200], int m, int n)
{
	int s = 0;
	for (int i = 1; i < n; i = i + 2)
	{
		for (int j = 0; j < m; j++)
		{
			if (KTChinhPhuong(a[j][i]))
				s += a[j][i];
		}
	}
	return s;
}