#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[][10], int&, int&);
void Xuat(float[][10], int, int);
float TichCot(float[][10], int, int, int);

int main()
{
	float a[10][10];
	int k, l, c;
	Nhap(a, k, l);
	Xuat(a, k, l);
	cout << "Chon cot:";
	cin >> c;
	cout << TichCot(a, k, l, c);
	return 0;

}

void Nhap(float a[][10], int& m, int& n)
{
	cout << "nhap m:";
	cin >> m;
	cout << "nhap n:";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}
void Xuat(float a[][10], int m, int n)
{

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(8) << a[i][j];
		cout << endl;
	}
}
float TichCot(float a[][10], int m, int n, int c)
{
	float s = 1;
	if (c >= 0 && c < n)
		for (int i = 0; i < m; i++)
		{
			if (0<a[i][c])
				s *= a[i][c];
		}
	return s;
}


