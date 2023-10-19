#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
int DemCucTieu(float[][100], int, int);
int ktCucTieu(float[][100], int, int, int, int);
int DemCucDai(float[][100], int, int);
int ktCucDai(float[][100], int, int, int, int);

int main()
{
	float a[100][100];
	int m, n;
	Nhap(a, m, n);
	Xuat(a, m, n);
	cout << "So cuc tri trong ma tran: " << DemCucDai(a, m, n) + DemCucTieu(a, m, n);
	return 0;
}

void Nhap(float a[][100], int& m, int& n)
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

void Xuat(float a[][100], int m, int n)
{
	cout << "Ma tran da nhap: " << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(8) << a[i][j];
		cout << endl;
	}
}

int ktCucTieu(float a[][100], int m, int n, int d, int c)
{
	int dd[8] = { -1,-1,-1,0,0,1,1,1 };
	int dc[8] = { -1, 0, 1,-1,1,-1,0,1 };
	int flag = 1;
	for (int k = 0; k < 8; k++)
	{
		if (d + dd[k] >= 0 && c + dc[k] >= 0
			&& d + dd[k] < m
			&& c + dc[k] < n
			&& a[d + dd[k]][c + dc[k]] < a[d][c])
			flag = 0;
	}
	return flag;
}

int DemCucTieu(float a[][100], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (ktCucTieu(a, m, n, i, j) == 1)
				dem++;
		}
	}
	return dem;
}

int ktCucDai(float a[][100], int m, int n, int d, int c)
{
	int dd[8] = { -1,-1,-1,0,0,1,1,1 };
	int dc[8] = { -1, 0, 1,-1,1,-1,0,1 };
	int flag = 1;
	for (int k = 0; k < 8; k++)
	{
		if (d + dd[k] >= 0 && c + dc[k] >= 0
			&& d + dd[k] < m
			&& c + dc[k] < n
			&& a[d + dd[k]][c + dc[k]] > a[d][c])
			flag = 0;
	}
	return flag;
}

int DemCucDai(float a[][100], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (ktCucDai(a, m, n, i, j) == 1)
				dem++;
		}
	}
	return dem;
}
