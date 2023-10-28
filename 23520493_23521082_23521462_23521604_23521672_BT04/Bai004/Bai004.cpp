#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int&, int&);

void Nhap(float a[][100], int& m, int& n) {
	cout << "Nhap m: ";
	cin >> m;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "]";
			cin >> a[i][j];
		}
	}
}
void Xuat(float a[][100], int& n, int& m) {
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << fixed << setw(4) <<setprecision(1) << a[i][j];
		cout << endl;
	}
}
int main()
{
	float a[100][100];
	int m, n;
	Nhap(a, m, n);
	Xuat(a, m, n);
	return 0;
}