#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void nhap(float a[][500], int& n, int& m);
void xuat(float a[][500], int n, int m);
float LonNhat(float a[][500], int n, int m);
void LietKe(float a[][500], int n, int m);

int main()
{
	float a[500][500];
	int k, l;
	nhap(a, k, l);
	cout << "Mang ban dau: \n";
	xuat(a, k, l);
	LietKe(a, k, l);
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
	cout << "\n";
}

float LonNhat(float a[][500], int n, int m)
{
	float ln = a[1][1];
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

void LietKe(float a[][500], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			if (LonNhat(a, n, m) == a[i][j])
				cout << "+" << i << ",";
	}
}