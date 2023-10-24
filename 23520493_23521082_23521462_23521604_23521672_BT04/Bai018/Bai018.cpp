#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[][10], int&, int&);
void Xuat(int[][10], int, int);
void LietKe(int[][10], int, int,int);
bool ktChan(int k);

int main()
{
	int a[10][10];
	int k, l,c;
	Nhap(a, k, l);
	Xuat(a, k, l);
	cout << "Chon cot:";
	cin >> c;
	LietKe(a, k, l,c);
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
void LietKe(int a[][10], int m, int n,int c)
{
	if (c >= 0 && c < n)
	{
		for (int i = 0; i < m; i++)
		{
			if (ktChan(a[i][c]))
				cout << a[i][c] << endl;
		}
	}
}
bool ktChan(int k)
{
	bool flag = true;
	if (k % 2 != 0)
		flag = false;
	return flag;
}

