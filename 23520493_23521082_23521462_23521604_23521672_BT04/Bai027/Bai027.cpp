#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][100], int& m, int& n);
int TongNT(int[][100], int, int);
bool ktsnt(int);

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

int TongNT(int a[][100], int m, int n)
{
	int s = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] >= 2)
				if (ktsnt(a[i][j]) == true)
					s = s + a[i][j];
	return s;
}

bool ktsnt(int i)
{
	for (int j = 2; j <= i - 1; j++)
		if (i % j == 0)
			return false;
	return true;
}

int main()
{
	int a[100][100];
	int k, l;
	Nhap(a, k, l);
	cout<<"Tong cac so nguyen to la : "<<TongNT(a, k, l);
	return 0;
}