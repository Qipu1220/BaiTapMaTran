#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[][10], int&, int&);
void Xuat(int[][10], int, int);
int Dem2m(int[][10], int, int);
bool kt2m(int);

int main()
{
	int a[10][10];
	int k, l;
	Nhap(a, k, l);
	Xuat(a, k, l);
	cout << Dem2m(a, k, l);
}
void Nhap(int a[][10], int& m, int& n)
{
	cout << "nhap m:";
	cin >> m;
	cout << "nhap n:";
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
int Dem2m(int a[][10], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (kt2m(a[i][j]))
				dem += 1;
	return dem;
}
bool kt2m(int k)
{
	if (k < 1)
		return false;
	for (k; k > 1; k /= 2)
	{
		if (k % 2 != 0)
			return false;
	}
	return true;
}