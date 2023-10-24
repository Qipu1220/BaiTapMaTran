#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[][10], int&, int&);
void Xuat(int[][10], int, int);
int Tong5m(int[][10], int, int, int);
bool ktDang5m(int k);

int main()
{
	int a[10][10];
	int k, l, d;
	Nhap(a, k, l);
	Xuat(a, k, l);
	cout << "Chon dong:";
	cin >> d;
	cout << Tong5m(a, k, l, d);
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
int Tong5m(int a[][10], int m, int n, int d)
{
	int s = 0;
	if (d >= 0 && d < m)
		for (int j = 0; j < n; j++)
		{
			if (ktDang5m(a[d][j]))
				s += a[d][j];
		}
	return s;
}
bool ktDang5m(int k)
{
	if (k < 1)
		return false;
	bool flag = true;
	while (k > 1)
	{
		k%= 5;
		if (k != 0)
			flag = false;
		k /= 10;
	}
	return flag;
}

