#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int[][200], int&, int&);
void Xuat(int[][200], int, int);
bool KTHoanThien(int);
int SoLuongHoanThien(int[][200], int, int);

int main()
{
	int a[200][200];
	int m, n;
	Nhap(a, m, n);
	Xuat(a, m, n);
	cout << "So luong so hoan thien trong ma tran la: " << SoLuongHoanThien(a, m, n);
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
		{
			cout << "a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
}

void Xuat(int a[][200], int m, int n)
{
	cout << "Ma tran vua nhap: " << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(8) << a[i][j];
		cout << endl;
	}
}

bool KTHoanThien(int n)
{
	int s = 0;
	for (int i = 1; i < n; i++)
		if (n % i == 0)
			s += i;
	if (s == n)
		return true;
	return false;
}

int SoLuongHoanThien(int a[][200], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (KTHoanThien(a[i][j]))
				dem++;
		}
	}
	return dem;
}