#include <iostream>
#include <iomanip>
#define max 100
using namespace std;

void Nhap1(float[][max], int&, int&);
void Nhap2(float[][max], int&, int&);
void SapTangCoMangPhu(float[][max], int, int);
void Xuat1(float[][max], int, int);
void Xuat2(float[][max], int, int);

void Nhap1(float a[][max], int& m, int& n) 
{
	cout << "CO MANG PHU" << endl;
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
	cout << "Mang ban dau la: " << endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++)
			cout << fixed << setw(4) << setprecision(1) << a[i][j] << " ";
		cout << endl;

	}
}
void Nhap2(float c[][max], int& m, int& n) 
{
	cout << "KO CO MANG PHU" << endl;
	cout << "Nhap m: ";
	cin >> m;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "]= ";
			cin >> c[i][j];
		}
	}
	cout << "Mang ban dau la: " << endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++)
			cout << fixed << setw(4) << setprecision(1) << c[i][j] << " ";
		cout << endl;

	}
}
void SapTangKoCoMangPhu(float c[][max], int m, int n)
{
	int k = m * n;
	for (int i = 0; i < k - 1; i++)
	{
		for (int j = i + 1; j < k; j++)
		{
			if (c[i / n][i % n] > c[j / n][j % n])
			{
				int tam = c[i / n][i % n];
				c[i / n][i % n] = c[j / n][j % n];
				c[j / n][j % n] = tam;
			}
		}
	}
}
void SapTangCoMangPhu(float a[][max], int m, int n) 
{
	float b[max];
	int k, i, j;
	k = 0;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			b[k++] = a[i][j];
		}
	}
	for (i = 0; i <= k - 2; i++)
	{
		for (j = i + 1; j <= k - 1; j++)
		{
			if (b[i] > b[j])
			{
				float temp = b[i];
				b[i] = b[j];
				b[j] = temp;
			}
		}
	}
	k = 0;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			a[i][j] = b[k++];
		}
	}
}
void Xuat1(float a[][max], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
void Xuat2(float c[][max], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << c[i][j]<<" ";
		}
		cout << endl;
	}
}
int main()
{
	float a[max][max];
	float c[max][max];
	int m, n;

	Nhap1(a, m, n);
	SapTangCoMangPhu(a, m, n);
	Xuat1(a, m, n);
	Nhap2(c, m, n);
	SapTangKoCoMangPhu(c, m, n);
	Xuat2(c, m, n);
	return 0;
}