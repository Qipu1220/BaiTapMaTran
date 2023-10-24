#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[][10], int&, int&);
void Xuat(int[][10], int, int);
int TongChan(int[][10], int, int,int);
bool ktChan(int k);

int main()
{
	int a[10][10];
	int k, l,d;
	Nhap(a, k, l);
	Xuat(a, k, l);
	cout << "Chon dong:";
	cin >> d;
	cout << TongChan(a, k, l,d);
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
int TongChan(int a[][10], int m, int n,int d)
{
	int s = 0;
	if (d >= 0 && d < m)
		for (int j = 0; j < n; j++)
		{
			if (ktChan(a[d][j]))
				s += a[d][j];
		}
	return s;
}
bool ktChan(int k)
{
	if (k % 2 == 0)
		return true;
	return false;
}

