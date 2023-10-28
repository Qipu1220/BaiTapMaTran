#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][500], int&, int&);
int DemCucTieu(float[][500], int, int);
void Xuat(float[][500], int, int);

void Nhap(float a[][500], int& m, int& n) {
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
int DemCucTieu(float a[][500], int m, int n) {
	int dem = 0;

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			bool isMin = true;
			if (i > 0 && a[i - 1][j] <= a[i][j]) {
				isMin = false;
			}
			if (i < m - 1 && a[i + 1][j] <= a[i][j]) {
				isMin = false;
			}
			if (j > 0 && a[i][j - 1] <= a[i][j]) {
				isMin = false;
			}
			if (j < n - 1 && a[i][j + 1] <= a[i][j]) {
				isMin = false;
			}

			if (isMin) {
				dem++;
			}
		}
	}
	return dem;
}
void Xuat(float a[][500], int m, int n)
{
	cout << endl;
	cout << "Ma tran la: ";
	cout << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << fixed << setw(4) << setprecision(1) << a[i][j];
		cout << endl;
	}

	cout << endl;
	cout << "Dap an la: ";
	cout << endl;
	int dem = DemCucTieu(a,m,n);
	cout << setw(4) << dem;
}
int main()
{
	float a[500][500];
	int m, n, c;
	Nhap(a, m, n);
	Xuat(a, m, n);
	return 0;
}