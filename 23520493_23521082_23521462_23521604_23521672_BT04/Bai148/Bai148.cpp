#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[][20], int&, int&);
void Xuat(int[][20], int, int);
void ThemCot(int[][20], int, int&, int);

int main()
{
	int a[20][20];
	int k, l, c;
	Nhap(a, k, l);
	Xuat(a, k, l);
	cout << "nhap cot:";
	cin >> c;
	ThemCot(a, k, l, c);
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
void ThemCot(int a[][20], int m, int& n, int c)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = n; j > c; j--)
			a[i][j] = a[i][j - 1];
		a[i][c] = 0;
	}
	n++;
}

