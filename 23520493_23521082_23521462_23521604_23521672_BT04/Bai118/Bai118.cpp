#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[][20], int&, int&);
void Xuat(int[][20], int, int);
int LonNhatDong(int[][20], int, int, int);
int LonNhatCot(int[][20], int, int, int);
void XayDung(int[][20], int, int, int[][20]);

int main()
{
	int a[20][20],b[20][20];
	int k, l;
	Nhap(a, k, l);
	Xuat(a, k, l);
	XayDung(a, k, l,b);
	cout << "Ma tran moi"<<endl;
	Xuat(b, k, l);
	return 0;

}

void Nhap(int a[][20], int& m, int& n)
{
	cout << "nhap hang:";
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
int LonNhatDong(int a[][20], int m, int n, int d)
{
	int lc = a[d][0];
	for (int j = 0; j < n; j++)
		if (a[d][j] > lc)
			lc = a[d][j];
	return lc;
}
int LonNhatCot(int a[][20], int m, int n, int c)
{
	int lc = a[0][c];
	for (int i = 0; i < m; i++)
		if (a[i][c] > lc)
			lc = a[i][c];
	return lc;
}
void XayDung(int a[][20], int m, int n, int b[][20])
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			int lnd = LonNhatDong(a, m, n, i);
			int lnc = LonNhatCot(a, m, n, j);
			if (lnd < lnc)
				b[i][j] = lnc;
			else
				b[i][j] = lnd;
		}
}
