#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void nhap(float a[][500], int& m, int& n);
void xuat(float a[][500], int m, int n);
float TongCucDai(float a[][500], int m, int n);
bool ktCucDai(float a[][500], int m, int n, int d, int c);

int main()
{
	float a[500][500];
	int k, l;
	nhap(a, k, l);
	cout << "Mang ban dau: \m";
	xuat(a, k, l);
	cout << "\nTong cac so cuc dai: " << TongCucDai(a, k, l);
	return 0;
}

void nhap(float a[][500], int& m, int& n)
{
	cout << "nhap n:";
	cin >> n;
	cout << "nhap m:";
	cin >> m;
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

bool ktCucDai(float a[][500], int m, int n, int d, int c)
{
	int di[8] = { -1,-1,-1,0,+1,+1,+1,0 };
	int dj[8] = { -1,0,+1,+1,+1,0,-1,-1 };
	bool flag = true;
	for (int k = 0; k < 8; k++)
	{
		if (d + di[k] >= 0 && d + di[k] < m && c + dj[k] >= 0 && c + dj[k]<n && a[d + di[k]][c + dj[k]]> a[d][c])
			flag = false;
	}
	return flag;
}

float TongCucDai(float a[][500], int m, int n)
{
	float s = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (ktCucDai(a, m, n, i, j))
				s = s + a[i][j];
		}
	}
	return s;
}