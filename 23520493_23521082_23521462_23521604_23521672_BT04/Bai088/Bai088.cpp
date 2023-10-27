#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[][10], int&, int&);
void Xuat(float[][10], int, int);
float TongLonNhat(float[][10], int, int);
float TongDong(float[][10], int, int,int);

int main()
{
	float a[10][10];
	int k, l, c;
	Nhap(a, k, l);
	Xuat(a, k, l);
	cout << TongLonNhat(a, k, l);
	return 0;

}

void Nhap(float a[][10], int& m, int& n)
{
	cout << "nhap m:";
	cin >> m;
	cout << "nhap n:";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}
void Xuat(float a[][10], int m, int n)
{

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(8) << a[i][j];
		cout << endl;
	}
}
float TongLonNhat(float a[][10], int m, int n)
{
	float lc = TongDong(a,m,n,0);
	for (int i = 0; i < m; i++)
		if (TongDong(a, m, n, i) > lc)
			lc = TongDong(a, m, n, i);
	return lc;
}
float TongDong(float a[][10], int m, int n, int d)
{
	float s = 0;
	for (int j = 0; j < n; j++)
		s += a[d][j];
	return s;
}