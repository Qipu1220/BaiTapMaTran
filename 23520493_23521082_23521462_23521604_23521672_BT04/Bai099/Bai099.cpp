#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][500], int&, int&);
int VTLN(int[], int);
int TimCS(int[][500], int, int);
void Xuat(int[][500], int, int);

void Nhap(int a[][500], int& m, int& n) {
	cout << "Nhap m: ";
	cin >> m;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "]= ";
			cin >> a[i][j];
		}
	}
}
int VTLN(int a[], int n) {
	int lc = 0;
	for (int i = 0; i < n - 1; i++)
		if (a[i] > a[lc])
			lc = i;
	return lc;
}
int TimCS(int a[][500], int m, int n) {
	int dem[10] = { 0,0,0,0,0,0,0,0,0,0 };
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++) {
			int t = abs(a[i][j]);
			while (t != 0) {
				int dv = t % 10;
				dem[dv]++;
				t = t / 10;
			}
		}
	return VTLN(dem, 10);
}
void Xuat(int a[][500], int m, int n) {
	cout << "Dap an la: " << TimCS(a, m, n) << endl;
}
int main()
{
	int a[500][500];
	int m, n;
	Nhap(a, m, n);
	Xuat(a, m, n);
	return 0;
}