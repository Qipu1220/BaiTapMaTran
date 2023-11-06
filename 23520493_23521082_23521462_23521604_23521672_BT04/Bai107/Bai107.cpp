#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][100], int&, int&);
bool KiemTraGiamDanTheoDong(float a[][100], int dong, int cot, int i);
bool KiemTraGiamDanTheoCot(float a[][100], int dong, int cot, int j);
bool KiemTraGiamDan(float a[][100], int dong, int cot);


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


bool KiemTraGiamDanTheoCot(float a[][100], int dong, int cot, int j)
{
	for (int i = 0; i < dong - 1; i++)
		if (a[i][j] < a[i + 1][j])
			return false;
	return true;
}

bool KiemTraGiamDanTheoDong(float a[][100], int dong, int cot, int i)
{
	for (int j = 0; j < cot - 1; j++)
		if (a[i][j] < a[i][j + 1])
			return false;
	return true;
}

bool KiemTraGiamDan(float a[][100], int dong, int cot)
{
	for (int i = 0; i < dong; i++)
		if (!KiemTraGiamDanTheoDong(a, dong, cot, i))
			return false;
	for (int j = 0; j < cot; j++)
		if (!KiemTraGiamDanTheoCot(a, dong, cot, j))
			return false;
	return true;
}

int main()
{
	float a[100][100];
	float b[10000];
	int k, l;
	Nhap(a, k, l);
	if (KiemTraGiamDan(a, k, l))
		cout << "Cac gia tri trong ma tran giam dan theo dong va cot.";
	else
		cout << "Cac gia tri trong ma tran khong giam dan theo dong va cot.";
	return 0;
}
