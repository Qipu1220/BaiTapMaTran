#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

void TaoMaTran(float[][500], int&, int&);
void Xuat(float[][500], int, int);
void Xuat(string, float[][500], int, int);

void TaoMaTran(float a[][500], int& m, int& n)
{
	cout << "Nhap m : ";
	cin >> m;
	cout << "Nhap n : ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = (float) - 100.0 + rand() / (RAND_MAX / 200);
}

void Xuat(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << fixed <<setw(10)<< setprecision(3) << a[i][j];
		cout << endl;
	}
}

void Xuat(string fname, float a[][500], int m, int n)
{
	ofstream fo(fname);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			fo << fixed << setw(5) << setprecision(3) << a[i][j];
		fo << endl;
	}
}

int main()
{
	float a[500][500];
	int k, l;
	TaoMaTran(a, k, l);
	Xuat(a, k, l);
	Xuat("floatdata06.inp", a, k, l);
}