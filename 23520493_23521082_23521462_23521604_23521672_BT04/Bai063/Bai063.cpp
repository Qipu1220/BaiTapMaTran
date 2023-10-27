#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[][10], int&, int&);
void Xuat(float[][10], int, int);
int DemAm(float[][10], int, int,int c);

int main()
{
	float a[10][10];
	int k, l, c;
	Nhap(a, k, l);
	Xuat(a, k, l);
	cout << "Chon cot:";
	cin >> c;
	cout << DemAm(a, k, l, c);
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
int DemAm(float a[][10], int m, int n,int c)
{
	int dem = 0;
	if (c >= 0 && c < n)
		for (int i = 0; i < m; i++)
		{
			if (0 > a[i][c])
				dem++;
		}
	return dem;
}