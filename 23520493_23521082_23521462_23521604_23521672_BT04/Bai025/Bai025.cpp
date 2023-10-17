#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void nhap(int a[][500], int& m, int& n);
void xuat(int a[][500], int m, int n);
bool ktLe(int x);
int TichLe(int a[][500], int m, int n);

int main()
{
	int a[500][500];
	int k, l;
	nhap(a, k, l);
	cout << "Mang ban dau: \m";
	xuat(a, k, l);
	cout << "\nTich le hang chan: " << TichLe(a, k, l);
	return 0;
}

void nhap(int a[][500], int& m, int& n)
{
	cout << "nhap n:";
	cin >> n;
	cout << "nhap m:";
	cin >> m;
	srand(time(NULL));
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			a[i][j] = rand() % (200 + 1) - 100;
	}
}

void xuat(int a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(8) << a[i][j];
		cout << endl;
	}
}

bool ktLe(int x)
{
	if (x % 2 == 0)
		return false;
	return true;
}

int TichLe(int a[][500], int m, int n)
{
	int t = 1;
	for (int i = 0; i < m; i += 2)
	{
		for (int j = 0; j < n; j++)
		{
			if (ktLe(a[i][j]))
				t = t * a[i][j];
		}
	}
	return t;
}