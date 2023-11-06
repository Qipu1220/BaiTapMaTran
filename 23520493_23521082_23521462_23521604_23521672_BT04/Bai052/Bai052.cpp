#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][500], int&, int&);
int ktCucDai(float[][500], int, int, int, int);
int ktCucTieu(float[][500], int, int, int, int);
float TongCucDai(float[][500], int, int);
float TongCucTieu(float[][500], int, int);
float TongCucTri(float[][500], int, int);

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



int main()
{
	int a[100][100];
	int k, l, t;
	cout << "Nhap hang : ";
	cin >> t;
	Nhap(a, k, l);
	cout << "Tong la : " << TongDuong(a, k, l, t);
	return 0;
}