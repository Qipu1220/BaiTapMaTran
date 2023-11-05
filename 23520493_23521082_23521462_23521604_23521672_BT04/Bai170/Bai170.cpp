#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void Nhap(float[][200], int&, int&);
void Xuat(float[][200], int, int);
int DemCon(float[][200], int, int, float[][200], int, int);

int main()
{
	cout << "Nhap mang A: \n";
	float a[200][200];
	int m, n;
	Nhap(a, m, n);
	cout << "Mang A:\n";
	Xuat(a, m, n);

	cout << "Nhap mang B: \n";
	float b[200][200];
	int k, l;
	Nhap(b, k, l);
	cout << "Mang B:\n";
	Xuat(b, k, l);

	cout << "\nSo lan xuat hien cua A trong B la: " << DemCon(a, m, n, b, k, l);
	return 0;
}

void Nhap(float a[][200], int& m, int& n)
{
	cout << "Nhap m:";
	cin >> m;
	cout << "Nhap n:";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
}

void Xuat(float a[][200], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(8) << fixed << setprecision(2) << a[i][j];
		}
		cout << endl;
	}
}

int DemCon(float a[][200], int m, int n, float b[][200], int k, int l)
{
	if (m > k || n > l)
		return 0;
	int dem = 0;
	for(int d=0;d<=k-m;d++)
		for (int c = 0; c <= l - n; c++)
		{
			int flag = 1;
			for (int i = 0; i < m; i++)
				for (int j = 0; j < n; j++)
					if (b[d + i][c + j] != a[i][j])
						flag = 0;
			if (flag == 1)
				dem++;
		}
	return dem;
}