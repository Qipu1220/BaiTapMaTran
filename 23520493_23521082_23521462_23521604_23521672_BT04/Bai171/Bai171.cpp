#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[][50], int&, int&);
void Xuat(float[][50], int, int);
void ktCon(float[][50], int, int, int, int);
void TimConLonNhat(float[][50], int, int, int&, int&, int&, int&);

int main()
{
	float a[50][50];
	int m, n;
	Nhap(a, m, n);
	Xuat(a, m, n);
	cout << endl;
	int vtd, vtc, k, l = 0;
	TimConLonNhat(a, m, n, vtd, vtc, k, l);
	return 0;
}


void Nhap(float a[][50], int& m, int& n)
{
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
	}
}

void Xuat(float a[][50], int m, int n)
{
	cout << "Ma tran: " << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(8) << a[i][j];
		}
		cout << endl;
	}
}

int ktCon(float a[][50], int m, int n, int vtd, int vtc, int k, int l)
{
	int flag = 1;
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < l; j++)
		{
			if (a[i+vtd][j+vtc] <= 0)
				flag = 0;
		}
	}
	return flag;
}

void TimConLonNhat(float a[][50], int m, int n, int& vtd, int& vtc, int& k, int& l)
{
	for (k = m; k >= 1; k--)
	{
		for (l = n; l >= 1; l--)
		{
			for (vtd = 0; vtd <= m - k; vtd++)
			{
				for (vtc = 0; vtc <= n - l; vtc++)
				{
					if (ktCon(a, m, n, vtd, vtc, k, l) == 1)
					{
						for (int i = 0; i < k; i++)
						{
							for (int j = 0; j < l; j++)
							{
								cout << setw(8) << a[vtd + i][vtc + j];
							}
							cout << endl;
						}
						cout << endl;
						for (vtd = 0; vtd <= m - k; vtd++)
						{
							for (vtc = 0; vtc <= n - l; vtc++)
							{
								if (ktCon(a, m, n, vtd, vtc, l, k) == 1)
								{
									for (int i = 0; i < l; i++)
									{
										for (int j = 0; j < k; j++)
										{
											cout << setw(8) << a[vtd + i][vtc + j];
										}
										cout << endl;
									}
								}
								return;
							}
						}
					}
				}
			}
		}
	}
}