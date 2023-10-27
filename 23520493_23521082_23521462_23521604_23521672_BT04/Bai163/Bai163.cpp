#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[][20], int&, int&);
void Xuat(int[][20], int, int);
void Xoay90(int[][20], int&, int&);
void Xoay270(int[][20], int&, int&);


int main()
{
	int a[20][20];
	int k, l, c;
	Nhap(a, k, l);
	Xuat(a, k, l);
	Xoay270(a, k, l);
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
void Xoay90(int a[][20], int&m, int&n)
{
	int b[20][20];
	int k, l;

	k = n;
	l = m;
	for (int i = 0; i < k ;i++)
		for (int j = 0; j < l; j++)
			b[i][j] = a[j][n - 1 - i];
	m = k;
	n = l;
	for (int i = 0; i < m ; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = b[i][j];
}
void Xoay270(int a[][20], int& m, int& n)
{
	Xoay90(a, m, n);
	Xoay90(a, m, n);
	Xoay90(a, m, n);
}