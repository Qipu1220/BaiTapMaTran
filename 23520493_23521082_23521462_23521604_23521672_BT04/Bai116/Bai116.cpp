#include <iostream>
#include <iomanip>
void Nhap(float[][50], int&, int&);
void Xuat(float[][50], int, int);
int ktCotGiam(float[][50], int, int, int);
void LietKe(float[][50], int, int);

using namespace std;

int main()
{
	float a[50][50];
	int m, n, c;
	Nhap(a, m, n);
	Xuat(a, m, n);
	LietKe(a, m, n);
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
		{
			cout << setw(8) << a[i][j];
		}
		cout << endl;
	}
}


int ktCotTang(float a[][50], int m, int n, int c)
{
	int lc = 1;
	for (int i = 0; i < m - 1; i++)
	{
		if (a[i][c] > a[i + 1][c])
			lc = 0;
	}
	return lc;
}

void LietKe(float a[][50], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		if (ktCotTang(a, m, n, i) == 1)
			cout << i << " ";
	}
}