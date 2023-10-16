#include<iostream>
#include<iomanip>
using namespace std;
void nhap(long a[][500], int& n, int& m);
void xuat(long a[][500], int n, int m);

int main()
{
	long a[500][500];
	int k, l;
	nhap(a, k, l);
	xuat(a, k, l);
	return 0;
}

void nhap(long a[][500], int& n, int& m)
{
	cout << "nhap n:";
	cin >> n;
	cout << "nhap m:";
	cin >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << "a[" << i << "][" << j << "]= ";
			cin >> a[i][j];
		}
	}
}

void xuat(long a[][500], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cout << setw(8) << a[i][j];
		cout << endl;
	}
}