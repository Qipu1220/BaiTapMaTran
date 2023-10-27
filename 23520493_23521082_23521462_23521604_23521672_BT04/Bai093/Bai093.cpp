#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[][10], int&, int&);
void Xuat(int[][10], int, int);
int DemLonNhat(int[][10], int, int);
int DemDong(int[][10], int, int, int);
void LietKe(int[][10], int, int);
bool ktNguyenTo(int k);

int main()
{
	int a[10][10];
	int k, l, c;
	Nhap(a, k, l);
	Xuat(a, k, l);
	LietKe(a, k, l);
	return 0;

}

void Nhap(int a[][10], int& m, int& n)
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
void Xuat(int a[][10], int m, int n)
{

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(8) << a[i][j];
		cout << endl;
	}
}
int DemLonNhat(int a[][10], int m, int n)
{
	int lc = DemDong(a, m, n, 0);
	for (int i = 0; i < m; i++)
		if (DemDong(a, m, n, i) > lc)
			lc = DemDong(a, m, n, i);
	return lc;
}
int DemDong(int a[][10], int m, int n, int d)
{
	int dem = 0;
	for (int j = 0; j < n; j++)
		if (ktNguyenTo(a[d][j]))
			dem++;
	return dem;
}
void LietKe(int a[][10], int m, int n)
{
	for (int i = 0; i < n; i++)
		if (DemDong(a,m,n,i)==DemLonNhat(a,m,n))
			cout << i<<endl;
}
bool ktNguyenTo(int k)
{
	int dem = 0;
	for (int i = 1; i <= k; i++)
		if (k % i == 0)
			dem++;
	if (dem == 2)
		return true;
	else
		return false;
}
