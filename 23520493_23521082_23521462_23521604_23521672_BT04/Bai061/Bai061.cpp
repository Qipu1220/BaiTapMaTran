#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
bool KTHoanThien(int);
int LietKeHoanThien(int[][100], int, int, int);

int main()
{
	int a[100][100];
	int m, n, d;
	Nhap(a, m, n);
	Xuat(a, m, n);
	cout << endl << "Nhap dong can xuat so hoan thien: ";
	cin >> d;
	cout << "Co " << LietKeHoanThien(a, m, n, d) << " so hoan thien tren dong " << d;
	return 0;
}

void Nhap(int a[][100], int& m, int& n)
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

void Xuat(int a[][100], int m, int n)
{
	cout << "Xuat ma tran vua nhap: " << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(8) << a[i][j];
		}
		cout << endl;
	}
}

bool KTHoanThien(int n)
{
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		if (n % i == 0)
		{
			s += i;
		}
	}
	if (s == n)
		return true;
	return false;
}

int LietKeHoanThien(int a[][100], int m, int n, int d)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (KTHoanThien(a[d][i]))
			dem++;
	}
	return dem;
}