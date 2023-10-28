#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][500], int&, int&);
int KT(float[][500], int , int);

void Nhap(float a[][500], int& m, int& n) 
{
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
int KT(float a[][500], int m, int n)
{
	int flag = 1;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if ((a[i][j]) <= 0)
			{
				flag = 0;
				break;
			}
		}
		
	}
	return flag;
}
int main()
{
	float a[500][500];
	int m, n;
	Nhap(a, m, n);
	int flag = KT(a, m, n);
	if (flag==0) 
		cout << 0 << endl;
	else
		cout << 1 << endl;
	
	return 0;
}