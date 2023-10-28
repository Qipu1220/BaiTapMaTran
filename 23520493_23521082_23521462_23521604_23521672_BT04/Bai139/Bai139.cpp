#include <iostream>
#include <iomanip>
#define max 100
using namespace std;

void Nhap(int a[max][max], int& m, int& n) {
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
void BienDoi(int a[max][max], int b[], int m, int n, int& k) {
	k = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++) {
			b[k++] = a[i][j];
		}
}
void Giam(int a[], int k) 
{
	for (int i = 0; i < k ; i++)
		for (int j = i + 1; j < k; j++)
			if (a[i] > a[j])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
}
void SapXep(int b[], int a[max][max], int m, int n)
{
	int t = 0;
	int dongmin = 0;
	int cotmin = 0;
	int dongmax = m;
	int cotmax = n;
	while (dongmin < dongmax && cotmin < cotmax) {
		for (int i = cotmin; i < cotmax; i++)
		{
			a[dongmin][i] = b[t];
			t++;

		}
		dongmin++;
		for (int i = dongmin; i < dongmax; i++)
		{
			a[i][cotmax - 1] = b[t];
			t++;
		}
		cotmax--;
		if (dongmin < dongmax)
		{
			for(int i=cotmax-1;i>=cotmin;i--)
			{ 
				a[dongmax - 1][i] = b[t];
				t++;
			}
			dongmax--;
		}
		
		if (cotmin < cotmax)
		{
			for (int i = dongmax - 1; i >= dongmin; i--)
			{
				a[i][cotmin] = b[t];
				t++;
			}
			cotmin++;
		}
	}
}
void Xuat(int a[max][max], int m, int n) {
	cout << "Mang duoc sap xep la: " << endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << fixed << setw(4) << setprecision(1) << a[i][j] << " ";
		}
		cout << endl;
	}
}
int main()
{
	int mc[4][max];
	int m, n;

	Nhap(mc, m, n);
	int b[max];
	int k;
	BienDoi(mc, b, m, n, k);
	Giam(b, k);
	SapXep(b, mc, m, n);
	Xuat(mc, m, n);
	return 0;
}