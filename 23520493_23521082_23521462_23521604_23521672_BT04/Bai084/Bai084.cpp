#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][500], int&, int&);
bool KTNguyenTo(int);
int TimLonNhat(int[][500], int, int);
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
int TimLonNhat(int a[][500], int m, int n) {
	int NTLN = 0;

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (KTNguyenTo(a[i][j])) {
				if (a[i][j] > NTLN) {
					NTLN = a[i][j];
				}
			}
		}
	}

	return NTLN;
}

bool KTNguyenTo(int n) {
	if (n <= 1) {
		return false;
	}
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

void Xuat(int a[][500], int m, int n)
{
	cout << "Dap an la: ";
	cout << endl;
	cout << setw(4) << TimLonNhat(a, m, n);
}
int main()
{
	int a[500][500];
	int m, n, c;
	Nhap(a, m, n);
	Xuat(a, m, n);
	return 0;
}