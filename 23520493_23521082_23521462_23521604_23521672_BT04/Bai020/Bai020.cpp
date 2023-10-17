#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void nhap(int a[][500], int& m, int& n);
void xuat(int a[][500], int m, int n);
bool ktDang5m(int x);
void LietKe(int a[][500], int m, int n, int& h);

int main()
{
	int a[500][500];
	int k, l, z;
	nhap(a, k, l);
	cout << "Mang ban dau: \m";
	xuat(a, k, l);
	LietKe(a, k, l, z);
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

bool ktDang5m(int x)
{
	int a = x;
	if (a < 1)
		return false;
	bool flag = true;
	while (a >1 )
	{
		if (a % 5 != 0)
			flag = false;
		a = a / 5;
	}
	return flag;
}

void LietKe(int a[][500], int m, int n, int& h)
{
	cout << "\nNhap cot muon xet: ";
	cin >> h;
	if (h > n)
		cout << "cot bi loi";
	cout << "\nLiet ke: \m";
	for (int i = 0; i < m; i++)
	{
		if (ktDang5m(a[i][h]))
			cout << setw(8) << a[i][h];
	}
}