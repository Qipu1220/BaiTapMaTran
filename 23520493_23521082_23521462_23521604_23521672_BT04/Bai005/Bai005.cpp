#include<iostream>
#include<iomanip>
using namespace std;
void nhap(long a[][500], int& m, int& n);
void xuat(long a[][500], int m, int n);

int main()
{
	long a[500][500];
	int k, l;
	nhap(a, k, l);
	xuat(a, k, l);
	return 0;
}

void nhap(long a[][500], int& m, int& n)
{
	cout << "nhap m:";
	cin >> m;
	cout << "nhap n:";
	cin >> n;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "]= ";
			cin >> a[i][j];
		}
	}
}

void xuat(long a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(8) << a[i][j];
		cout << endl;
	}
}