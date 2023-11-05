#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[][50], int&, int&);
void Xuat(float[][50], int, int);
int ktCon(float[][50], int, int, int, int);
void ConDau(float[][50], int, int);

int main()
{
	float a[50][50];
	int m, n;
	Nhap(a, m, n);
	Xuat(a, m, n);
	cout << "\n";
	ConDau(a, m, n);
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
	cout << "Ma tran: " << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(8) << a[i][j];
		}
		cout << endl;
	}
}

int ktCon(float a[][50], int m, int n, int d, int c)
{
	int flag = 1;
	for (int i = d; i < d + 3; i++)
	{
		for (int j = c; j < c + 3; j++)
		{
			if (a[i][j] <= 0)
				flag = 0;
		}
	}
	return flag;
}

void ConDau(float a[][50], int m, int n)
{
	for (int vtd = 0; vtd <= m - 3; vtd++)
	{
		for (int vtc = 0; vtc <= n - 3; vtc++)
		{
			if (ktCon(a, m, n, vtd, vtc) == 1)
			{
				for (int i = vtd; i < vtd + 3; i++)
				{
					for (int j = vtc; j < vtc + 3; j++)
						cout << setw(8) << a[i][j];
					cout << endl;
				}
				return;
			}
		}
	}
	cout << "Khong co";
}