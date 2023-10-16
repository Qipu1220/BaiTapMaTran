#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void nhap(float a[][500], int& n, int& m);
void xuat(float a[][500], int n, int m);
float TongCucDai(float a[][500], int n, int m);
bool ktCucDai(float a[][500], int n, int m, int d, int c);

int main()
{
	float a[500][500];
	int k, l;
	nhap(a, k, l);
	cout << "Mang ban dau: \n";
	xuat(a, k, l);
	cout << "\nTong cac so cuc dai: " << TongCucDai(a, k, l);
	return 0;
}

void nhap(float a[][500], int& n, int& m)
{
	cout << "nhap m:";
	cin >> m;
	cout << "nhap n:";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			a[i][j] = ((float)rand() / RAND_MAX) * (100 + 100) - 100;
	}
}

void xuat(float a[][500], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cout << setw(8) << fixed << setprecision(2) << a[i][j];
		cout << endl;
	}
}

bool ktCucDai(float a[][500], int n, int m, int d, int c)
{
	int di[8] = { -1,-1,-1,0,+1,+1,+1,0 };
	int dj[8] = { -1,0,+1,+1,+1,0,-1,-1 };
	bool flag = true;
	for (int k = 0; k < 8; k++)
	{
		if (d + di[k] >= 0 && d + di[k] < n && c + dj[k] >= 0 && c + dj[k]<m && a[d + di[k]][c + dj[k]]> a[d][c])
			flag = false;
	}
	return flag;
}

float TongCucDai(float a[][500], int n, int m)
{
	float s = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (ktCucDai(a, n, m, i, j))
				s = s + a[i][j];
		}
	}
	return s;
}