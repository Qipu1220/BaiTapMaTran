#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[][20], int&, int&);
void Xuat(int[][20], int, int);
void SapDongGiam(int[][20], int, int,int);

int main()
{
	int a[20][20], b[20][20];
	int k, l,d;
	Nhap(a, k, l);
	Xuat(a, k, l);
	cout << "nhap dong:";
	cin >> d;
	SapDongGiam(a, k, l, d);
	cout << "Ma tran moi"<<endl;
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
void SapDongGiam(int a[][20], int m, int n, int d)
{
	for (int i = 0; i <= n - 2; i++)
		for (int j = i+1; j <= n - 1; j++)
			if (a[d][i] < a[d][j])
			{
				int t = a[d][i];
				a[d][i] = a[d][j];
				a[d][j] = t;
			}
}