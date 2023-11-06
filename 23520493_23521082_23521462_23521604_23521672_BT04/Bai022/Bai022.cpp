#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][100], int& m, int& n);
void LietKe(int[][100], int, int);
bool kttl(int);

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

bool kttl(int n)
{
	int a = abs(n);
	while (a > 0) 
	{
		int k = n % 10;
		if (k % 2 == 0) 
			return false;
		a /= 10;
	}
	return true;
}


void LietKe(int a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (kttl(a[i][j]) == true)
				cout << setw(5) << a[i][j];
}


int main()
{
	int a[100][100];
	int k, l;
	Nhap(a, k, l);
	LietKe(a, k, l);
	return 0;
}