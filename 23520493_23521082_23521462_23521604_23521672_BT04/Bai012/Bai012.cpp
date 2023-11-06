#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][100], int& m, int& n);
void LietKe(int[][100], int,int);
bool ktsnt(int);

void Nhap(int a[][100], int& m, int& n)
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

void LietKe(int a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] >= 2)
				if (ktsnt(a[i][j]) == true)
					cout << setw(5) << a[i][j];
}

bool ktsnt(int i)
{
	for (int j = 2; j <= i - 1; j++)
		if (i % j == 0)
			return false;
	return true;
}

int main()
{
	int a[100][100];
	int k, l;
	Nhap(a, k, l);
	LietKe(a, k, l);
	return 0;
}