#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int[][200], int&, int&);
void Xuat(int[][200], int, int);
bool KT3m(int);
void LietKe(int[][200], int, int, int);


int main()
{
	int b[200][200];
	int m, n, x;
	Nhap(b, m, n);
	Xuat(b, m, n);
	cout << "Nhap dong can kiem tra: ";
	cin >> x;
	LietKe(b, m, n, x);
	return 0;
}

void Nhap(int a[][200], int& m, int& n)
{
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
	}
}

void Xuat(int a[][200], int m, int n)
{
	cout << "Xuat ma tran: ";
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(8) << a[i][j];
		}
		cout << endl;
	}
}

bool KT3m(int n)
{
	int t = n;
	bool flag = true;
	while (t != 0)
	{
		if (t % 3 != 0)
			flag = false;
		t /= 3;
	}
	return flag;
}

void LietKe(int a[][200], int m, int n, int x)
{
	for (int j = 0; j < n; j++)
	{
		if (KT3m(a[x][j]))
			cout << setw(8) << a[x][j];
	}
}
