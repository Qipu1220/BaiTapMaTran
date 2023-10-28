#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void Nhap(int[][500], int&, int&);
bool KT2m(int);
void LietKe(int[][500], int, int);

void Nhap(int a[][500], int& m, int& n) {
	cout << "Nhap m: ";
	cin >> m;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "]= ";
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << fixed << setw(4) << setprecision(1) << a[i][j];
		cout << endl;
	}
}
bool KT2m(int n) {
	if (n < 1)
		return false;
	bool flag = true;
	int t = n;
	while (t > 1)
	{
		if (t % 2 != 0)
			flag = false;
		t = t / 2;
	}
	return flag;
}
void LietKe(int a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (KT2m(a[i][j]))
				cout << a[i][j]<< " ";
		}
	}
}
int main()
{
	int a[500][500];
	int m, n;
	Nhap(a, m, n);
	LietKe(a, m, n);
	return 0;
}