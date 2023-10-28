#include<iostream>
using namespace std;

void KT(float, int);

int const maxn = 1e3 + 100;
int m, n;
float a[maxn], f[maxn][maxn];

void KT(float res, int x) {
	if (a[x] == -1) return;
	if (a[x] == 1 && res > 0) return;
	if (a[x] == 0 && res < 0) return;
	a[x] = -1;
	return;
}

int main() 
{
	cout << "Nhap m va n: ";
	cin >> m >> n;
	for (int i = 1; i <= m; i++) 
	{
		for (int j = 1; j <= n; j++) 
		{
			cin >> f[i][j];
			if (i == 1) {
				if (f[i][j] > 0) 
					a[j] = 1;
				else a[j] = 0;
			}
			else KT(f[i][j], j);
		}
	}
	for (int i = 1; i <= m; i++) 
	{
		for (int j = 1; j <= n; j++) 
		{
			if (a[j] != -1) 
				cout << f[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}