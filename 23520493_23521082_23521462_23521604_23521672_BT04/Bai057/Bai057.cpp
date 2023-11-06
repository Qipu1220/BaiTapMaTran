#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][100], int& , int& );
int DemToanChan(int[][100], int, int);
bool kttc(int);

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


bool kttc(int n)
{
	int a = abs(n);
	while (a > 0)
	{
		int k = n % 10;
		if (k % 2 == 1)
			return false;
		a /= 10;
	}
	return true;
}


int DemToanChan(int a[][100], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < m; j++)
			if (kttc(a[i][j]) == true)
				dem++;
	return dem;
}


int main()
{
	int a[100][100];
	int k, l;
	Nhap(a, k, l);
	cout << "So cac so toan chan la : " << DemToanChan(a, k, l);
	return 0;
}