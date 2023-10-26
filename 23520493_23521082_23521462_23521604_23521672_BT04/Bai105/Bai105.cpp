#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void nhap(float [][500], int& , int& );
void xuat(float [][500], int , int );
int ktDongTang(float[][500], int, int, int);
void KiemTra(float[][500], int, int);

int main()
{
	float a[500][500];
	int k, l;
	nhap(a, k, l);
	cout << "Mang ban dau: \n";
	xuat(a, k, l);
	KiemTra(a, k, l);
	return 0;
}

void nhap(float a[][500], int& m, int& n)
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

void xuat(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(8) << fixed << setprecision(2) << a[i][j];
		cout << endl;
	}
}

int ktDongTang(float a[][500], int m, int n, int x)
{
	if (x > m)
		return 0;
	bool flag = true;
	for (int j = 0; j < n - 1; j++)
		if (a[x][j] > a[x][j + 1])
			flag = false;
	if (flag == true)
		return 1;
	else
		return -1;
}

void KiemTra(float a[][500], int m, int n)
{
	int x;
	cout << "nhap dong kiem tra: ";
	cin >> x;
	if (ktDongTang(a, m, n, x) == 1)
		cout << "Hang tang";
	if (ktDongTang(a, m, n, x) == -1)
		cout << "Hang khong tang";
	else
		cout << "Nhap dong loi";
}