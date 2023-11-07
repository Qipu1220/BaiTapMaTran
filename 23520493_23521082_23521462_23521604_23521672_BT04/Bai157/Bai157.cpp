#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][100], int&, int&);
void DichTraiDong(float[][100], int, int, int);
void DichTrai(float[][100], int, int);

void Nhap(float a[][100], int& m, int& n)
{
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
}

void DichTraiDong(float a[][100], int m, int n, int d)
{
	float temp = a[d][0];
	for (int j = 0; j <= n - 2; j++)
		a[d][j] = a[d][j + 1];
	a[d][n - 1] = temp;
}

void DichTrai(float a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
		DichTraiDong(a, m, n, i);
}

int main()
{
	float a[100][100];
	int k, l;
	Nhap(a, k, l);
	DichTrai(a, k, l);
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < l; j++)
			cout << setw(5) << a[i][j];
		cout << endl;
	}
	return 0;
}