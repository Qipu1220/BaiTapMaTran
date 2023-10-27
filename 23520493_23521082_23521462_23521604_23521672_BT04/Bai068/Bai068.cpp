#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[][10], int&, int&);
void Xuat(float[][10], int, int);
int DemChuSo(float[][10], int, int);
int DemChuSo(int k);

int main()
{
	float a[10][10];
	int k, l, c;
	Nhap(a, k, l);
	Xuat(a, k, l);
	cout << DemChuSo(a, k, l);
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
int DemChuSo(float a[][10], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			dem += DemChuSo(a[i][j]);
	return dem;
}
int  DemChuSo(int k)
{
	int dem = 0;
	for (k; k > 0; k /= 10)
		dem++;
	return dem;
}