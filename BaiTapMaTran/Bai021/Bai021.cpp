#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int[][200], int&, int&);
void Xuat(int[][200], int, int);
void LietKeBien(int[][200], int, int);

int main()
{
	int b[200][200];
	int m, n;
	Nhap(b, m, n);
	Xuat(b, m, n);
	cout << endl;
	LietKeBien(b, m, n);
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
			cout << setw(8) << a[i][j];
		cout << endl;
	}
}

void LietKeBien(int a[][200], int m, int n)
{
	cout << "Cac phan tu o bien: " << endl;
	for (int i = 0; i < m; i = i + m - 1)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(8) << a[i][j];
		}
		cout << endl;
	}
}