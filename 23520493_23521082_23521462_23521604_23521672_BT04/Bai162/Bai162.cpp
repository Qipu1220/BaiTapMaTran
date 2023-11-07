#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][100], int&, int&);
void Xoay90(float[][100], int&, int&);
void Xoay180(float[][100], int&, int&);

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

void Xoay90(float a[][100], int& m, int& n)
{
	float b[100][100];
	int k, l;
	k = n;
	l = m;
	for (int i = 0; i < k; i++)
		for (int j = 0; j < l; j++)
			b[i][j] = a[j][n - 1 - i];
	m = k;
	n = l;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = b[i][j];
}

void Xoay180(float a[][100], int& m, int& n)
{
	Xoay90(a, m, n);
	Xoay90(a, m, n);
}

int main()
{
	float a[100][100];
	int k, l;
	Nhap(a, k, l);
	Xoay180(a, k, l);
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < l; j++)
			cout << setw(5) << a[i][j];
		cout << endl;
	}
	return 0;
}