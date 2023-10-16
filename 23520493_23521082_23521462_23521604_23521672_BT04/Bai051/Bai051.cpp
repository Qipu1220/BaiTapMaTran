#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[][200], int&, int&);
void Xuat(float[][200], int, int);
float TongCucTieu(float[][200], int, int);
int  KTCucTieu(float[][200], int, int, int, int);

int main()
{
	float a[200][200];
	int m, n;
	Nhap(a, m, n);
	Xuat(a, m, n);
	cout <<endl<< "Tong cac cuc tieu cua ma tran: " << TongCucTieu(a, m, n);
	return 0;
}

void Nhap(float a[][200], int& m, int& n)
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

void Xuat(float a[][200], int m, int n)
{
	cout << "Ma tran vua nhap: " << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(8) << a[i][j];
		cout << endl;
	}
}

int KTCucTieu(float a[][200], int m, int n, int d, int c)
{
	int di[8] = { -1,-1,-1,0,0,1,1,1 };
	int dj[8] = { -1,0,1,-1,1,-1,0,1 };
	int flag = 1;
	for (int k = 0; k < 8; k++)
	{
		if (d + di[k] >= 0 && c + dj[k]>=0 
			&& d + di[k] < m 
			&& c + dj[k] < n 
			&& a[d + di[k]][c + dj[k]] < a[d][c])
			flag = 0;
	}
	return flag;
}

float TongCucTieu(float a[][200], int m, int n)
{
	float s = 0;
	for (int i = 0; i < m;i++)
		for (int j = 0; j < n; j++)
		{
			if (KTCucTieu(a, m, n, i, j) == 1)
			{
				s += a[i][j];
			}
		}
	return s;
}