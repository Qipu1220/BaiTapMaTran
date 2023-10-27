#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int[][50], int&, int&);
void Xuat(int[][50], int, int);
void XuatNTTang(int[][50], int, int);
void HoanVI(int& , int& );
bool KTNT(int);

int main()
{
	int a[50][50];
	int m, n;
	Nhap(a, m, n);
	Xuat(a, m, n);
	XuatNTTang(a, m, n);
	return 0;
}

void Nhap(int a[][50], int& m, int& n)
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

void Xuat(int a[][50], int m, int n)
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

void HoanVi(int& m, int& n)
{
	int temp = m;
	m = n;
	n = temp;
}


bool KTNT(int m)
{
	int dem = 0;
	for (int i = 1; i <= m; i++)
		if (m % i == 0)
			dem++;
	if (dem == 2)
		return true;
	return false;
}

void XuatNTTang(int a[][50], int m, int n)
{
	int b[50];
	int k = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (KTNT(a[i][j]))
				b[k++] = a[i][j];
		}
	}

	for (int i = 0; i <= k - 2; i++)
	{
		for (int j = i+1; j <= k - 1; j++)
			if (b[i] > b[j])
				HoanVi(b[i], b[j]);
	}

	cout << endl;
	for (int i = 0; i < k; i++)
		cout << setw(8) << b[i];
}
