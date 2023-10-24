#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[][10], int&, int&);
void Xuat(int[][10], int, int);
int ktCucTieu(int[][10], int, int, int, int);
void LietKe(int[][10], int, int);

int main()
{
	int a[10][10];
	int k, l;
	Nhap(a, k, l);
	Xuat(a, k, l);
	cout << "Cac phan tu la cuc tieu :"<<endl;
	LietKe(a, k, l);
	return 0;

}

void Nhap(int a[][10], int& m, int& n)
{
	cout << "nhap m:";
	cin >> m;
	cout << "nhap n:";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}
void Xuat(int a[][10], int m, int n)
{

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(8) << a[i][j];
		cout << endl;
	}
}
int ktCucTieu(int a[][10], int m, int n, int d, int c)
{
	int flag = 1;
	for (int di = -1; di <= 1; di++)
		for (int dj = -1; dj <= 1; dj++)
			if (d + di >= 0 && d + di < m && c + dj >= 0 && c + dj < n && !(di == 0 && dj == 0) && a[d + di][c + dj]<a[d][c])
				flag = 0;
	return flag;
}
void LietKe(int a[][10], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			if (ktCucTieu(a, m, n, i, j))
				cout << a[i][j] << endl;
		}
}