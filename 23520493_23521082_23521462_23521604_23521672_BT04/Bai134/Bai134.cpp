#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][500], int&, int&);
void XuatChanGiam(int[][500], int, int);
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
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++)
			cout << fixed << setw(4) << setprecision(1) << a[i][j] << " ";
		cout << endl;

	}
}
void XuatChanGiam(int a[][500], int m, int n) {
	int b[500];
	int k;
	int i, j;
	k = 0;
	for (i = 0; i < m; i++)
		for (int j = 0; j < n; j++) {
			if (a[i][j] % 2 == 0)
				b[k++] = a[i][j];
		}
	for (i = 0; i <= k - 2; i++)
		for (j = i + 1; j <= k - 1; j++)
			if (b[i] < b[j])
			{
				int temp = b[i];
				b[i] = b[j];
				b[j] = temp;
			}
	for (i = 0; i < k; i++)
		cout << "Dap an la: " << setw(8) << b[i];
}

int main()
{
	int a[500][500];
	int m, n;

	Nhap(a, m, n);
	XuatChanGiam(a, m, n);
	return 0;
}