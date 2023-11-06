#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][100], int& m, int& n);
int ChanDau(int[][100], int, int);
int ChanLonNhat(int[][100], int, int);

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

int ChanDau(int a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] % 2 == 0)
			{
				return a[i][j];
				break;
			}
}

int ChanLonNhat(int a[][100], int m, int n)
{
	int max = ChanDau(a, m, n);
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] % 2 == 0)
				if (a[i][j] > max)
					max = a[i][j];
	return max;
}

int main()
{
	int a[100][100];
	int k, l;
	Nhap(a, k, l);
	cout << "So chan lon nhat la : " << ChanLonNhat(a, k, l);
	return 0;
}