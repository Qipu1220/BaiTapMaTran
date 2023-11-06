#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][100], int& m, int& n);
int DemDong(int[][100], int, int, int);
int DemLonNhat(int[][100], int, int);
void LietKe(int[][100], int, int);


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

int DemDong(int a[][100], int m, int n, int d)
{
	int dem = 0;
	for (int j = 0; j < n; j++)
		if (a[d][j]%2==0)
			dem++;
	return dem;
}

int DemLonNhat(int a[][100], int m, int n)
{
	int t= 0;
	int lc = DemDong(a, m, n, 0);
	for (int i = 0; i < m; i++)
		if (DemDong(a, m, n, i) > lc)
			lc = DemDong(a, m, n, i);
	return lc;
}

void LietKe(int a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
		if (DemDong(a, m, n, i) == DemLonNhat(a, m, n))
		{
			for (int j = 0; j < n; j++)
				cout << setw(3) << a[i][j];
			cout << endl;
		}

}

int main()
{
	int a[100][100];
	int k, l;
	Nhap(a, k, l);
	LietKe(a, k, l);
	return 0;
}