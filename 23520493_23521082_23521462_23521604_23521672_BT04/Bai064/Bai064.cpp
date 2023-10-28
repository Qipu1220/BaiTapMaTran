#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][500], int&, int&);
bool SoNguyenTo(int[][500], int, int, int);
void DemSoNguyenTo(int[][500], int, int, int);

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
bool SoNguyenTo(int n) {
	if (n <= 1) {
		return false;
	}
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0 && n > 0) {
			return false;
		}
	}
	return true;
}
void DemSoNguyenTo(int a[][500], int m, int n, int c) 
{
	int dem = 0;
	for (int i = 0; i < m; i++) {
		if (SoNguyenTo(a[i][c])) 
			dem++;
		}
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
	cout << "So so nguyen to cua cot la: ";
	cout << dem << endl;
}
int main()
{
	int a[500][500];
	int m, n;
	int c;
	Nhap(a, m, n);
	cout << "Nhap vao cot muon tinh: ";
	cin >> c;
	DemSoNguyenTo(a, m, n, c);
	return 0;
}