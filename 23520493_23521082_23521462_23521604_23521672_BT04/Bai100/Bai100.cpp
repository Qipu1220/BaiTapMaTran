#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void nhap(int[][500], int&, int&);
void xuat(int[][500], int, int);
void XuatMangCon(int[][500], int, int);

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

void XuatMangCon(int a[][500], int m, int n)
{

}