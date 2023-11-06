#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][100], int& m, int& n);
int DemChinhPhuongBien(int[][100], int, int);
bool ktcp(int);

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

bool ktcp(int a)
{
	if (a <= 0)
		return false;
	int sqrtN = sqrt(a);
    if (sqrtN * sqrtN == a)
		return true;
	return false;
}

int DemChinhPhuongBien(int a[][100], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (i == 0 || i == (m - 1) || j == 0 || j == (n - 1))
				if (ktcp(a[i][j]) == true)
					dem++;
	return dem;
}

int main()
{
	int a[100][100];
	int k, l;
	Nhap(a, k, l);
	cout << "So cac so chinh phuong o bien la : " << DemChinhPhuongBien(a, k, l);
	return 0;
}