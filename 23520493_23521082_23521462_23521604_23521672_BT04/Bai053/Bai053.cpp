#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[][10], int&, int&);
void Xuat(int[][10], int, int);
int DemChinhPhuong(int[][10], int, int);
bool ktChinhPhuong(int);

int main()
{
	int a[10][10];
	int k, l;
	Nhap(a, k, l);
	Xuat(a, k, l);
	cout << DemChinhPhuong(a, k, l);
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
int DemChinhPhuong(int a[][10], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktChinhPhuong(a[i][j]))
				dem += 1;
	return dem;
}
bool ktChinhPhuong(int k)
{
	for (int i = 0; i <= k; i++)
		if (i * i == k)
			return true;
	return false;
}