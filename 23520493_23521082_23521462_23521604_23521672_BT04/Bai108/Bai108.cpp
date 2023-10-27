#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[][20], int&, int&);
void Xuat(int[][20], int, int);
bool ktDong(int[][20], int, int,int);
void LietKe(int[][20], int, int);

int main()
{
	int a[20][20];
	int k, l;
	Nhap(a, k, l);
	Xuat(a, k, l);
	LietKe(a, k, l);
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
bool ktDong(int a[][20], int m, int n,int d)
{
	for (int j = 0; j < n; j++)
		if (a[d][j] % 2 == 0)
			return true;
	return false;
}
void LietKe(int a[][20], int m, int n)
{
	for (int i = 0; i < m; i++)
		if (ktDong(a, m, n, i))
			cout << setw(8) << i;
}