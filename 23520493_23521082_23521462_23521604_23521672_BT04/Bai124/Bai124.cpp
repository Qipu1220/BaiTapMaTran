#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][500], int&, int&);
void SapCotTang(float[][500], int, int, int);
void Xuat(float[][500], int, int);

void Nhap(float a[][500], int& m, int& n, int& c) {
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
			cout << fixed << setw(4)<<setprecision(1) << a[i][j]<< " ";
		cout << endl;
		
	}
	cout << "Nhap vao cot muon sap xep: " << endl;
	cin >> c;
}
void SapCotTang(float a[][500], int m, int n, int c) {
	for (int i = 0; i <= m - 2; i++)
		for (int j = i + 1; j <= m - 1; j++) {
			if (a[i][c] > a[j][c]) {
				int temp = a[i][c];
				a[i][c] = a[j][c];
				a[j][c] = temp;
			}
		}
}
void Xuat(float a[][500], int m, int n, int c) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++)
			cout << fixed << setw(4) << setprecision(1) << a[i][j] << " ";
		cout << endl;
	}
}

int main()
{
	float a[500][500];
	int m, n, c;
	
	Nhap(a, m, n,c);
	SapCotTang(a, m, n,c);
	Xuat(a, m, n, c);
	return 0;
}