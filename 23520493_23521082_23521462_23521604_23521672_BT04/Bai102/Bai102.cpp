#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][100], int& , int& );
int TonTaiLe(int[][100], int, int);

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

int TonTaiLe(int a[][100], int m, int n)
{
	int flag = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] % 2 == 1)
				flag = 1;
	return flag;
}

int main()
{
	int a[100][100];
	int k, l;
	Nhap(a, k, l);
	if (TonTaiLe(a, k, l) == 1)
		cout << "Co so le";
	else
		cout << " Khong co so le";
	return 0;
}