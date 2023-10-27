#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[][20], int&, int&);
void Xuat(int[][20], int, int);
void HoanViDong(int[][20], int, int, int,int);
void SapXep(int[][20], int, int);
int TongDong(int[][20], int, int, int);


int main()
{
	int a[20][20], b[20][20];
	int k, l, d;
	Nhap(a, k, l);
	Xuat(a, k, l);
	SapXep(a, k, l);
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
void HoanViDong(int a[][20], int m, int n, int d1,int d2)
{
		for (int j = 0; j < n ; j++)
			{
				int t = a[d1][j];
				a[d1][j] = a[d2][j];
				a[d2][j] = t;
			}
}
void SapXep(int a[][20], int m, int n)
{
	for (int i = 0; i <= m - 2; i++)
		for (int j = i + 1; j <= m - 1; j++)
			if (TongDong(a,m,n,i)>TongDong(a,m,n,j))
			{
				HoanViDong(a, m, n, i, j);
			}
}
int TongDong(int a[][20], int m, int n, int d)
{
	float s = 0;
	for (int j = 0; j < n; j++)
		s += a[d][j];
	return s;
}
