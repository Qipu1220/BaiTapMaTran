#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void nhap(int a[][500], int& n, int& m);
void xuat(int a[][500], int n, int m);
bool ktLe(int x);
int TichLe(int a[][500], int n, int m);

int main()
{
	int a[500][500];
	int k, l;
	nhap(a, k, l);
	cout << "Mang ban dau: \n";
	xuat(a, k, l);
	cout << "\nTich le hang chan: " << TichLe(a, k, l);
	return 0;
}

void nhap(int a[][500], int& n, int& m)
{
	cout << "nhap m:";
	cin >> m;
	cout << "nhap n:";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			a[i][j] = rand() % (200 + 1) - 100;
	}
}

void xuat(int a[][500], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
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

int TichLe(int a[][500], int n, int m)
{
	int t = 1;
	for (int i = 0; i < n; i += 2)
	{
		for (int j = 0; j < m; j++)
		{
			if (ktLe(a[i][j]))
				t = t * a[i][j];
		}
	}
	return t;
}