#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[][10], int&, int&);
void Xuat(int[][10], int, int);
int LonNhatDong(int[][10], int, int,int);
int LonNhatCot(int[][10], int, int, int);
int LonNhatCheo1(int[][10], int, int, int,int);
int LonNhatCheo2(int[][10], int, int, int,int);
int ktHoangHau(int[][10], int, int, int, int);
int DemHoangHau(int[][10], int, int);

int main()
{
	int a[10][10];
	int k, l;
	Nhap(a, k, l);
	Xuat(a, k, l);
	cout << DemHoangHau(a, k, l );
	return 0;

}

void Nhap(int a[][10], int& m, int& n)
{
	cout << "nhap hang:";
	cin >> m;
	cout << "nhap cot:";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}
void Xuat(int a[][10], int m, int n)
{

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(8) << a[i][j];
		cout << endl;
	}
}
int LonNhatDong(int a[][10], int m, int n,int d)
{
	int lc = a[d][0];
	for (int j = 0; j < n; j++)
		if (a[d][j] > lc)
			lc = a[d][j];
	return lc;
}
int LonNhatCot(int a[][10], int m, int n, int c)
{
	int lc = a[0][c];
	for (int i = 0; i < n; i++)
		if (a[i][c] > lc)
			lc = a[i][c];
	return lc;
}
int LonNhatCheo1(int a[][10], int m, int n, int d, int c)
{
	int lc = a[d][c];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if ((i - j == d - c) && a[i][j] > lc)
				lc = a[i][j];
	return lc;
}
int LonNhatCheo2(int a[][10], int m, int n, int d, int c)
{
	int lc = a[d][c];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if ((i + j == d + c) && a[i][j] > lc)
				lc = a[i][j];
	return lc;
}
int ktHoangHau(int a[][10], int m, int n, int d, int c)
{
	int lnd = LonNhatDong(a, m, n, d);
	int lnc = LonNhatCot(a, m, n, c);
	int lnc1 = LonNhatCheo1(a, m, n, d,c);
	int lnc2 = LonNhatCheo2(a, m, n, d,c);
	if (a[d][c] == lnd && a[d][c] == lnc && a[d][c] == lnc1 && a[d][c] == lnc2)
		return 1;
	return 0;
}
int DemHoangHau(int a[][10], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktHoangHau(a, m, n, i, j) == 1)
				dem++;
	return dem;
}