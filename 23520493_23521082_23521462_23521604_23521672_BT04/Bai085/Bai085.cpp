#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void nhap(int a[][500], int& n, int& m);
void xuat(int a[][500], int n, int m);
bool ktChinhPhuong(int x);
int ChinhPhuongDau(int a[][500],int n,int m);
int ChinhPhuongLonNhat(int a[][500], int n, int m);

int main()
{
	int a[500][500];
	int k, l;
	nhap(a, k, l);
	cout << "Mang ban dau: \n";
	xuat(a, k, l);
	cout << "\nSo chinh phuong lon nhat la: " << ChinhPhuongLonNhat(a, k, l);
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

bool ktChinhPhuong(int x)
{
	bool flag = false;
	for (int i = 0; i <= x; i++)
	{
		if (i * i == x)
			flag = true;
	}
	return flag;
}

int ChinhPhuongDau(int a[][500], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (ktChinhPhuong(a[i][j])==true)
				return a[i][j];
		}
	}
	return 0;
}

int ChinhPhuongLonNhat(int a[][500], int n, int m)
{
	if (ChinhPhuongDau(a, n, m) == 0)
	{
		cout << "Khong co so chinh phuong.";
		return 0;
	}
	int ln = ChinhPhuongDau(a, n, m);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (a[i][j] > ln)
				ln = a[i][j];
		}
	}
	return ln;
}