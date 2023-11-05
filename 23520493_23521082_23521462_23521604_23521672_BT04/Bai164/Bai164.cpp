#include <iostream>
#include <iomanip>
#define max 100
using namespace std;

void Nhap(float[][max], int&, int&);
void DaoDong(float[][max], int, int, int);
void Chieu(float[][max], int, int);
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
void DaoDong(float a[][max], int m, int n, int d) {
	int dd = 0;
	int cc = n - 1;
	while (dd < cc)
	{
		float temp = a[d][dd];
		a[d][dd] = a[d][cc];
		a[d][cc] = temp;
		dd++;
		cc--;
	}
}
void Chieu(float a[][max], int m, int n) {
	for (int i = 0; i < m; i++) 
		DaoDong(a, m, n, i);
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
	Chieu(a, m, n);
	Xuat(a, m, n);
	return 0;
}