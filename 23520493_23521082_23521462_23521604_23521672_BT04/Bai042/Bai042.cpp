#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][100], int& m, int& n);
int TongCot(int[][100], int, int, int);
bool mu2(int);

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

bool mu2(int n) 
{
	return (n & (n - 1)) == 0;
}


int TongCot(int a[][100], int m, int n, int k)
{
	int s = 0;
	for (int i = 0; i < n; i++)
		if (mu2(a[i][k]))
			s = s + a[i][k];
	return s;
}

int main()
{
	int a[100][100];
	int k, l, t;
	cout << "Nhap cot : ";
	cin >> t;
	Nhap(a, k, l);
	cout << "Tong la : " << TongCot(a, k, l, t);
	return 0;
}