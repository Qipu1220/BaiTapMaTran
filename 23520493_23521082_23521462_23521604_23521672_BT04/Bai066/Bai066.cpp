#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[][50], int&, int&);
void Xuat(float[][50], int, int);
int DemDuongBien(float[][50], int, int);

int main()
{
	float a[50][50];
	int m, n;
	Nhap(a, m, n);
	Xuat(a, m, n);
	cout << "Tren bien co " << DemDuongBien(a, m, n) << " so duong";
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

int DemDuongBien(float a[][50], int m, int n)
{
	int dem = 0;
	for (int j = 0; j < n; j++)
	{
		if (a[0][j] > 0 || a[m - 1][j] > 0)
			dem++;
	}
	for (int i = 0; i < m; i++)
	{
		if (a[i][0] > 0 || a[i][n - 1] > 0)
			dem++;
	}
	return dem;
}