#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float [][50], int&, int&);
void Xuat(float [][50], int, int);
int TonTaiDuong(float [][50], int, int);


int main()
{
	float a[50][50];
	int m, n;
	Nhap(a, m, n);
	Xuat(a, m, n);
	cout << TonTaiDuong(a, m, n);
	return 0;
}

void Nhap(float a[][50], int& m, int& n)
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

void Xuat(float a[][50], int m, int n)
{
	cout << "Ma tran da nhap: " << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(8) << a[i][j];
		cout << endl;
	}
}

int TonTaiDuong(float a[][50], int m, int n)
{
	int lc = 0;
	for (int i =0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] > 0)
				lc = 1;
		}
	}
	return lc;
}