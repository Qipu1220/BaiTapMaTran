#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][100], int& m, int& n);
int DemToanLe(int[][100], int, int, int);
bool kttl(int n);

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

bool kttl(int n)
{
	int a = abs(n);
	while (a > 0)
	{
		int k = n % 10;
		if (k % 2 == 0)
			return false;
		a /= 10;
	}
	return true;
}


int DemToanLe(int a[][100], int m, int n,int k)
{
	int dem = 0;
		for (int j = 0; j < m; j++)
			if (kttl(a[k][j]) == true)
				dem++;
	return dem;
}


int main()
{
	int a[100][100];
	int k, l, t;
	cout << "Nhap hang : ";
	cin >> t;
	Nhap(a, k, l);
	cout << "So cac so toan le tren hang la : " << DemToanLe(a, k, l, t);
	return 0;
}