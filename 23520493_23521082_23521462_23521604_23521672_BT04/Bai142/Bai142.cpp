#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][100], int&, int&);
void XoaCot(float[][100], int, int&, int);

void Nhap(float a[][100], int& m, int& n)
{
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
}

void XoaCot(float a[][100], int m, int& n, int k)
{
	for (int i = 1; i < m; i++)
	{
		for (int j = k; j < n - 1; j++)
			a[i][j] = a[i][j + 1];
	}
	n--;
}


int main()
{
	float a[100][100];
	int k, l,t;
	Nhap(a, k, l);
	cout << " Nhap cot can xoa : ";
	cin >> t;
	XoaCot(a, k, l, t);
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < l; j++)
			cout << setw(3) << a[i][j];
		cout << endl;
	}
	return 0;
}