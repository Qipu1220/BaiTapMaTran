#include <iostream>
#include <iomanip>
void Nhap(float[][50], int&, int&);
void Xuat(float[][50], int, int);
void HoanVi(float&, float&);
void HoanViCot(float[][50], int, int, int, int );

using namespace std;

int main()
{
	float a[50][50];
	int m, n, c;
	Nhap(a, m, n);
	Xuat(a, m, n);
	int c1, c2;
	cout << "Nhap 2 cot can hoan vi: ";
	cin >> c1 >> c2;
	HoanViCot(a, m, n, c1, c2);
	Xuat(a, m, n);
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

void HoanVi(float& m, float& n)
{
	float temp = m;
	m = n;
	n = temp;
}


void HoanViCot(float a[][50], int m, int n, int c1, int c2)
{
	for (int i = 0; i < m; i++)
	{
		HoanVi(a[i][c1], a[i][c2]);
	}
}