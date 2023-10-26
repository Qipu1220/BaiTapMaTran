#include <iostream>
#include <iomanip>
void Nhap(float[][50], int&, int&);
void Xuat(float[][50], int, int);
int ktDong(float[][50], int, int, int);
void LietKe(float[][50], int, int);
using namespace std;

int main()
{
	float a[50][50];
	int m, n, d;
	Nhap(a, m, n);
	Xuat(a, m, n);
	LietKe(a, m, n);

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
		{
			cout << setw(8) << a[i][j];
		}
		cout << endl;
	}
}


int ktDong(float a[][50], int m, int n, int d)
{
	int duong = 0;
	int am = 0;
	int khong = 0;
	for (int j = 0; j < n; j++)
	{
		if (a[d][j] > 0)
			duong = 1;
		if (a[d][j] < 0)
			am = 1;
		if (a[d][j]== 0)
			khong = 1;
	}
	if (duong == 1 && am == 1 && khong == 1)
		return 1;
	return 0;
}

void LietKe(float a[][50], int m, int n)
{
	for (int i = 0; i <m; i++)
	{
		if (ktDong(a, m, n, i) == 1)
			cout << i << setw(8);
	}
}