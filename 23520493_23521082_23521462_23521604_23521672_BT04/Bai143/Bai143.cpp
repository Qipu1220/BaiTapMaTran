#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[][20], int&, int&);
void Xuat(int[][20], int, int);
void XoaDong(int[][20], int&, int, int);
void XoaDong(int[][20], int&, int);
int ktDong(int[][20], int, int, int);
bool ktNguyenTo(int k);
bool ktChinhPhuong(int n);

int main()
{
	int a[20][20];
	int k, l;
	Nhap(a, k, l);
	Xuat(a, k, l);
	XoaDong(a, k, l);
	cout << "Ma tran moi" << endl;
	Xuat(a, k, l);
	return 0;

}

void Nhap(int a[][20], int& m, int& n)
{
	cout << "nhap dong:";
	cin >> m;
	cout << "nhap cot:";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin>>a[i][j] ;
}
void Xuat(int a[][20], int m, int n)
{

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(8) << a[i][j];
		cout << endl;
	}
}
void XoaDong(int a[][20], int& m, int n, int d)
{
	for (int i = d; i < m - 1; i++)
	{
		for (int j = 0; j < n; j++)
			a[i][j] = a[i + 1][j];
	}
	m--;
}
void XoaDong(int a[][20], int& m, int n)
{
	for (int i = 0; i < m; i++)
		if (ktDong(a, m, n, i))
		{
			XoaDong(a, m, n, i);
			i--;
		}
}
int ktDong(int a[][20], int m, int n, int d)
{
	int flag1 = 0;
	int flag2 = 0;
	for (int j = 0; j < n; j++)
	{
		if (ktNguyenTo(a[d][j]))
			flag1 = 1;
		if (ktChinhPhuong(a[d][j]))
			flag2 = 1;
	}
	return flag1*flag2;
}
bool ktNguyenTo(int k)
{
	int dem = 0;
	for (int i = 1; i <= k; i++)
		if (k % i == 0)
			dem++;
	if (dem == 2)
		return true;
	else
		return false;
}
bool ktChinhPhuong(int n)
{
	for (int i = 1; i <= n ; i++)
	{
		if (i * i == n)
			return true;
	}
	return false;
}