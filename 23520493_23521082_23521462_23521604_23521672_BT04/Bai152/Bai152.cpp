#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][100], int&, int&);
float TichDong(float[][100], int, int, int);
void ThemCot(float[][100], int, int&);

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

float TichDong(float a[][100], int m, int n, int k)
{		
	float t = 1;
	for (int j = 0; j < n; j++)
		t = t * a[k][j];
	return t;
}


void ThemCot(float a[][100], int m, int& n)
{
	n = n + 1;
	for (int i = 0; i < m; i++)
		a[i][n - 1] = TichDong(a, m, n-1, i);
}

int main()
{
	float a[100][100];
	int k, l;
	Nhap(a, k, l);
	ThemCot(a, k, l);
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < l; j++)
			cout << setw(5) << a[i][j];
		cout << endl;
	}
	return 0;
}