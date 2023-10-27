#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[][20], int&, int&);
void Xuat(int[][20], int, int);
int TonTaiHoanThien(int[][20], int, int);

int main()
{
	int a[20][20];
	int k, l;
	Nhap(a, k, l);
	Xuat(a, k, l);
	cout<<TonTaiHoanThien(a, k, l);
	return 0;

}

void Nhap(int a[][20], int& m, int& n)
{
	cout << "nhap hang:";
	cin >> m;
	cout << "nhap cot:";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = rand() % 201 - 100;
}
void Xuat(int a[][20], int m, int n)
{

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(8) << a[i][j];
		cout << endl;
	}
}
int TonTaiHoanThien(int a[][20], int m, int n)
{
	
	int s = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			for (int i = 1; i < a[i][j]; i++)
				if (a[i][j] % i == 0)
					s += i;
			if (s == a[i][j])
				return 1;
		}
	return 0;
}