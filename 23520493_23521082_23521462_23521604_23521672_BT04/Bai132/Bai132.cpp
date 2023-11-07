#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][100], int&, int&);
void DuongGiam(float[][100], int, int);
void AmTang(float[][100], int, int);
void SapXep(float[][100], int, int);
void HoanVi(float, float);

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

void DuongGiam(float a[][100], int m, int n)
{
	float b[500];
	int k;
	int i, j;
	k = 0;
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			if (a[i][j] > 0)
				b[k++] = a[i][j];
	for (i = 0; i <= k - 2; i++)
		for (j = i + 1; j <= k - 1; j++)
			if (b[i] < b[j])
				HoanVi(b[i], b[j]);
	k = 0;
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			if (a[i][j] > 0)
				a[i][j] = b[k++];
}

void AmTang(float a[][100], int m, int n)
{
	float b[500];
	int k;
	int i, j;
	k = 0;
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			if (a[i][j] < 0)
				b[k++] = a[i][j];
	for (i = 0; i <= k - 2; i++)
		for (j = i + 1; j <= k - 1; j++)
			if (b[i] > b[j])
				HoanVi(b[i], b[j]);
	k = 0;
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			if (a[i][j] < 0)
				a[i][j] = b[k++];
}

void SapXep(float a[][100], int m, int n)
{
	AmTang(a, m, n);
	DuongGiam(a, m, n);

}


void HoanVi(float m, float n)
{
	float t = m;
	m = n;
	n = t;
}


int main()
{
	float a[100][100];
	int k, l;
	Nhap(a, k, l);
	SapXep(a, k, l);
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < l; j++)
			cout << setw(3) << a[i][j];
		cout << endl;
	}
	return 0;
}