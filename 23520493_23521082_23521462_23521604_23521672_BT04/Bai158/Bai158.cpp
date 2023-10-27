#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[][20], int&, int&);
void Xuat(int[][20], int, int);
void DichPhai(int[][20], int, int);
void DichPhaiDong(int[][20], int, int, int);

int main()
{
	int a[20][20];
	int k, l, c;
	Nhap(a, k, l);
	Xuat(a, k, l);
	DichPhai(a, k, l);
	cout << "Ma tran moi" << endl;
	Xuat(a, k, l);
	return 0;

}

void Nhap(int a[][20], int& m, int& n)
{
	cout << "nhap dong:";
	cin >> m;
	cout << "nhap cot:";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = rand() % 201 - 100;
}
void Xuat(int a[][20], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(8) << a[i][j];
		cout << endl;
	}
}
void DichPhai(int a[][20], int m, int n)
{
	for (int i = 0; i < m; i++)
		DichPhaiDong(a, m, n, i);
}
void DichPhaiDong(int a[][20], int m, int n, int d)
{
	int temp = a[d][n - 1];
	for (int j = n - 1; j >= 1; j--)
		a[d][j] = a[d][j - 1];
	a[d][0] = temp;
}