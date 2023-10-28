#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][500], int&, int&);
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
			cout << "Nhap a[" << i << "][" << j << "]";
			cin >> a[i][j];
		}
	}
}
void LietKe(int a[][500], int m, int n) 
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			int t = a[i][j];
			int dn = 0;
			int dv;
			while (t != 0)
			{
				dv = t % 10;
				dn = dn * 10 + dv;
				t = t / 10;
			}
			if (dn == a[i][j])
				cout << fixed << setw(4) << a[i][j];
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