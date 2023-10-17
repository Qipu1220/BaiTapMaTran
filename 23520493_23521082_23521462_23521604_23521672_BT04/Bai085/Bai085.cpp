#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void nhap(int a[][500], int& m, int& n);
void xuat(int a[][500], int m, int n);
bool ktChinhPhuong(int x);
int ChinhPhuongDau(int a[][500],int m,int n);
int ChinhPhuongLonNhat(int a[][500], int m, int n);

int main()
{
	int a[500][500];
	int k, l;
	nhap(a, k, l);
	cout << "Mang ban dau: \m";
	xuat(a, k, l);
	cout << "\nSo chinh phuong lon nhat la: " << ChinhPhuongLonNhat(a, k, l);
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

int ChinhPhuongDau(int a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (ktChinhPhuong(a[i][j])==true)
				return a[i][j];
		}
	}
	return 0;
}

int ChinhPhuongLonNhat(int a[][500], int m, int n)
{
	if (ChinhPhuongDau(a, m, n) == 0)
	{
		cout << "Khong co so chinh phuong.";
		return 0;
	}
	int ln = ChinhPhuongDau(a, m, n);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] > ln)
				ln = a[i][j];
		}
	}
	return ln;
}