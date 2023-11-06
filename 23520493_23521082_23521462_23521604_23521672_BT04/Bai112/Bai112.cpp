#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][100], int&, int&);
int ktDong(float[][100], int, int, int);
void LietKe(float[][100], int, int);

void Nhap(float a[][100], int& m, int& n)
{
	cout << "Nhap m : ";
	cin >> m;
	cout << "Nhap n : ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "]" << "[" << j << "] : ";
			cin >> a[i][j];
		}
}

int ktDong(float a[][100], int m, int n, int k)
{
	int flag = 1;
	for (int j = 0; j < n; j++)
		if (a[k][j] >= 0)
			flag = 0;
	return flag;
}

void LietKe(float a[][100], int m, int n)
{
	for (int j = 0; j < n; j++)
		cout << setw(3) << a[m][j];
	cout << endl;
}

int main()
{
	float a[100][100];
	int k, l;
	Nhap(a, k, l);
	for (int i = 0; i < k; i++)
		if (ktDong(a, k, l, i) == 1)
			LietKe(a, i, l);
	return 0;
}