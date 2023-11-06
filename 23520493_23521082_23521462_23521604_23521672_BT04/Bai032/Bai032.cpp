#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][100], int& m, int& n);
int Tong(int[][100], int, int,float,float);

void Nhap(int a[][100], int& m, int& n)
{
	cout << "Nhap m : ";
	cin >> m;
	cout << "Nhap n : ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "]" << "[" << j << "] : ";
			cin >> a[i][j];
		}
}

int Tong(int a[][100], int m, int n, float k, float l)
{
	int s = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j]>=k && a[i][j]<=l)
					s = s + a[i][j];
	return s;
}

int main()
{
	int a[100][100];
	int k, l;
	float m, n;
	cout << "Nhap khoang : ";
	cin >> m, n;
	Nhap(a, k, l);
	cout << "Tong la : " << Tong(a, k, l,m,n);
	return 0;
}