#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void nhap(int[][500], int&, int&);
void xuat(int[][500], int, int);
bool ktNguyenTo(int);
int ktDong(int[][500], int, int, int);
void LietKe(int[][500], int, int);

int main()
{
	int a[500][500];
	int k, l;
	nhap(a, k, l);
	cout << "Mang ban dau: \n";
	xuat(a, k, l);
	cout << "cac dong chua so nguyen to: ";
	LietKe(a, k, l);
	return 0;
}

void nhap(int a[][500], int& m, int& n)
{
	cout << "nhap m:";
	cin >> m;
	cout << "nhap n:";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			a[i][j] = ((float)rand() / RAND_MAX) * (100 + 100) - 100;
	}
}

void xuat(int a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(8) << fixed << setprecision(2) << a[i][j];
		cout << endl;
	}
}

bool ktNguyenTo(int x)
{
	int dem = 0;
	for (int i = 1; i <= x; i++)
		if ((x % i) == 0)
			dem++;
	if (dem == 2)
		return true;
	else
		return false;
}

int ktDong(int a[][500], int m, int n, int x)
{
	bool flag = false;
	for (int j = 0; j < n; j++)
		if (ktNguyenTo(a[x][j]))
			flag = true;
	if (flag == true)
		return 1;
	else
		return 0;
}

void LietKe(int a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		if (ktDong(a, m, n, i))
			cout << i << ",";
	}
}