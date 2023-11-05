#include <iostream>
#include <iomanip>
#define max 500
using namespace std;

void Nhap(float[][max], int&, int&);
void DichPhai(float[], int);
void DichPhaiBien(float[][max], int, int);
void Xuat(float[][max], int, int);

void Nhap(float a[][max], int& m, int& n) {
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
	cout << "Ma tran ban dau la: " << endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++)
			cout << fixed << setw(4) << setprecision(1) << a[i][j] << " ";
		cout << endl;

	}
}
void DichPhai(float a[], int n) {
	float temp = a[n - 1];
	for (int i = n - 1; i >= 1; i--)
		a[i] = a[i - 1];
	a[0] = temp;
}
void DichPhaiBien(float a[][max], int m, int n) {
	float b[max];
	int k;
	k = 0;
	for (int j = 0; j<=n-2; j++) 
		b[k++] = a[0][j];
	for (int i = 0; i <= m - 2; i++)
		b[k++] = a[i][n - 1];
	for (int j = n - 1; j >= 1; j--)
		b[k++] = a[m - 1][j];
	for (int i = m - 1; i >= 1; i--)
		b[k++] = a[i][0];
	DichPhai(b, k);
	k = 0;
	for (int j = 0; j <= n - 2; j++)
		a[0][j] = b[k++];
	for (int i = 0; i <= m - 2; i++)
		a[i][n - 1] = b[k++];
	for (int j = n - 1; j >= 1; j--)
		a[m - 1][j] = b[k++];
	for (int i = m - 1; i >= 1; i--)
		a[i][0] = b[k++];
}

void Xuat(float a[][max], int m, int n) {
	cout << "Dap an la: " << endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++)
			cout << fixed << setw(4) << setprecision(1) << a[i][j] << " ";
		cout << endl;
	}
}

int main()
{
	float a[max][max];
	int m = sizeof(a) / sizeof(a[0]);
	int n = sizeof(a[0]) / sizeof(a[0][0]);
	Nhap(a, m, n);
	DichPhaiBien(a, m, n);
	Xuat(a, m, n);
	return 0;
}