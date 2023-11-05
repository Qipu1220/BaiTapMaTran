#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][100], int&, int&);
void LietKe(float[][100], int, int);

void Nhap(float a[][100], int& m, int& n) {
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
void LietKe(float a[][100], int m, int n)
{
	int c[100];
	int k;
	k = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] < 0)
				c[k++] = i;
	for (int i = 0; i < m; i++)
	{
		if (c[i] >= 0)
			cout << c[i] << " ";
	}

}

int main()
{
	float a[100][100];
	int m, n;
	Nhap(a, m, n);
	LietKe(a, m, n);
	return 0;
}