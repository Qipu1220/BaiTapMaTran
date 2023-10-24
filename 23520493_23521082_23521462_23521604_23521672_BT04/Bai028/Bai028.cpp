#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[][10], int&, int&);
void Xuat(int[][10], int, int);
int TongToanChan(int[][10], int, int);
bool ktToanChan(int k);

int main()
{
	int a[10][10];
	int k, l;
	Nhap(a, k, l);
	Xuat(a, k, l);
	cout<<TongToanChan(a, k, l);
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
int TongToanChan(int a[][10], int m, int n)
{
	int s = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			if (ktToanChan(a[i][j]))
				s += a[i][j];
		}
	return s;
}
bool ktToanChan(int k)
{
	bool flag = true;
	for (int t = k = abs(k); t != 0; t /= 10)
	{
		int dv = t % 10;
		if (dv % 2 != 0)
			flag = false;
	}
	return flag;
}

