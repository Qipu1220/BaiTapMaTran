#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[][20], int&, int&);
void Xuat(int[][20], int, int);
void DuongBienTang(int[][20], int, int);
void HoanVi(int&, int&);

int main()
{
	int a[20][20];
	int k, l;
	Nhap(a, k, l);
	Xuat(a, k, l);
	DuongBienTang(a, k, l);
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
void DuongBienTang(int a[][20], int m, int n)
{
	int b[500];
	int k;
	int i, j;
	
	k = 0;
	for (j = 0; j <= n - 2; j++)
		b[k++] = a[0][j];
	for (i = 0; i <= m - 2; i++)
		b[k++] = a[i][n-1];
	for (j = n-1; j>=1; j--)
		b[k++] = a[m-1][j];
	for (i = m-1; i >=1; i--)
		b[k++] = a[i][0];

	for (i = 0; i <= k - 2; i++)
		for (j = i + 1; j <= k - 1; j++)
			if (b[i] > b[j]&&b[i]&&b[j]>0)
				HoanVi(b[i], b[j]);

	k = 0;
	for (j = 0; j <= n - 2; j++)
		a[0][j] = b[k++];
	for (i = 0; i <= m - 2; i++)
		a[i][n-1] = b[k++];
	for (j = n - 1; j >= 1; j--)
		a[m-1][j] = b[k++];
	for (i = m - 1; i >= 1; i--)
		a[i][0] = b[k++];
}
void HoanVi(int &a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}