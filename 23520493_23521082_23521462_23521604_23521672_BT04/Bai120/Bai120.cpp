#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void Nhap(float[][500], int&, int&);
void Xuat(float[][500], int, int);
void HoanVi(float&, float&);
void HoanViDong(float[][500], int, int, int, int);

int main()
{
	float a[500][500];
	int m, n;
	Nhap(a, m, n);
	cout << "Mang ban dau:\n";
	Xuat(a, m, n);
	int d1, d2;
	cout << "Nhap 2 dong hoan vi:";
	cin >> d1 >> d2;
	HoanViDong(a, m, n, d1, d2);
	cout << "Mang sau khi hoan vi:\n";
	Xuat(a, m, n);
	return 0;
}

void Nhap(float a[][500], int& m, int& n)
{
	cout << "Nhap m:";
	cin >> m;
	cout << "Nhap n:";
	cin >> n;
	srand(time(NULL));
	for(int i=0;i<m;i++)
		for (int j = 0; j < n; j++)
		{
			a[i][j] = ((float)rand() / RAND_MAX) * (100+100) - 100;
		}
}

void Xuat(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(8) <<fixed<<setprecision(2)<< a[i][j];
		}
		cout << endl;
	}
}

void HoanVi(float& x, float& y)
{
	float m = 0;
	m = x;
	x = y;
	y = m;
}

void HoanViDong(float a[][500], int m, int n, int d1, int d2)
{
	for (int j = 0; j < n; j++)
		HoanVi(a[d1][j], a[d2][j]);
}