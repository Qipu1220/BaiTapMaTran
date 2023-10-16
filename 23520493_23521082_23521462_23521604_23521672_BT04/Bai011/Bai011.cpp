#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;
void Nhap(int[][200], int&, int&);
void Xuat(int[][200], int, int);
bool KTChingPhuong(int);
void LietKe(int[][200], int, int);


int main()
{
	int b[200][200];
	int m, n;
	Nhap(b, m, n);
	Xuat(b, m, n);
	LietKe(b, m, n);
	return 0;
}

void Nhap(int a[][200], int& m, int& n)
{
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
	}
}

void Xuat(int a[][200], int m, int n)
{
	cout << "Ma tran da nhap: " << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(8) << a[i][j];
		}
		cout << endl;
	}
}

bool KTChinhPhuong(int n)
{
	for (int i = 1; i <=n/2; i++)
	{
		if (i * i == n)
			return true;
	}
	return false;
}

void LietKe(int a[][200], int m, int n)
{
	cout << "Cac so chinh phuong cua ma tran: ";
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (KTChinhPhuong(a[i][j]))
				cout << setw(8) << a[i][j];

		}
	}
}