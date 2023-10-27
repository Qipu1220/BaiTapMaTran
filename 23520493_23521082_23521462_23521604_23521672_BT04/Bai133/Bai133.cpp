#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[][20], int&, int&);
void Xuat(int[][20], int, int);
void ChanTang(int[][20], int, int);
void LeGiam(int[][20], int, int);
void ChanTangLeGiam(int[][20], int, int);
void HoanVi(int&, int&);

int main()
{
	int a[20][20];
	int k, l;
	Nhap(a, k, l);
	Xuat(a, k, l);
	ChanTangLeGiam(a, k, l);
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
void ChanTang(int a[][20], int m, int n)
{
	int b[500];
	int k;
	int i, j;
	k = 0;
	for (i = 0; i < m; i++)
		for ( j = 0; j < n; j++)
			if (a[i][j] % 2 == 0)
				b[k++] = a[i][j];
	for (i = 0; i <= k - 2; i++)
		for (j = i+1; j <= k - 1; j++)
			if (b[i] > b[j])
				HoanVi(b[i], b[j]);
	k = 0;
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			if (a[i][j] % 2 == 0)
				a[i][j]= b[k++];

}
void LeGiam(int a[][20], int m, int n)
{
	int b[500];
	int k;
	int i, j;
	k = 0;
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			if (a[i][j] % 2 != 0)
				b[k++] = a[i][j];
	for (i = 0; i < k - 2; i++)
		for (j = i + 1; j < k - 1; j++)
			if (b[i] < b[j])
				HoanVi(b[i], b[j]);
	k = 0;
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			if (a[i][j] % 2 != 0)
				a[i][j] = b[k++];

}
void ChanTangLeGiam(int a[][20], int m,int n)
{
	ChanTang(a, m, n);
	LeGiam(a, m, n);
}
void HoanVi(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}