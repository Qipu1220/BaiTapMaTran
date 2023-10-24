#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[][10], int&, int&);
void Xuat(float[][10], int, int);
float TongBien(float[][10], int,int);
bool ktChinhPhuong(int);

int main()
{
	float a[10][10];
	int k, l;
	Nhap(a, k, l);
	Xuat(a, k, l);
	
	cout << TongBien(a, k, l);
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
float TongBien(float a[][10], int m, int n)
{
	float s = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (i == 0 || i == (m - 1) || j == 0 || j == (n - 1))
				if(ktChinhPhuong(a[i][j]))
					s += a[i][j];
	return s;
}
bool ktChinhPhuong(int k)
{
	for(int i=1;i<=k;i++)
		if(i*i==k)
			return true;
	return false;
}