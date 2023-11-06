#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][100], int& m, int& n);
int TanSuat(float[][100], int, int, float);
float TimGiaTri(float[][100], int, int);

void Nhap(float a[][100], int& m, int& n)
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

int TanSuat(float a[][100], int m, int n, float k)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] == k)
				dem++;
	return dem;
}

float TimGiaTri(float a[][100], int m, int n)
{
	int max = TanSuat(a,m,n,a[0][0]);
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (TanSuat(a, m, n, a[i][j]) > max)
				max = TanSuat(a, m, n, a[i][j]);
	return max;
}

int main()
{
    float a[100][100];
	int k, l;
	Nhap(a, k, l);
	cout << "So xuat hien nhieu lan nhat la : " << TimGiaTri(a, k, l);
	return 0;
}