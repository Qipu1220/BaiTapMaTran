#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][500], int&, int&);
void TimDong(int[][500], int, int);

void Nhap(int a[][500], int& m, int& n) {
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
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
bool KT(int n)
{
	int s = 0;
	int k;
	for (k = 1; k < n; k++)
	{
		if (n % k == 0)
			s = s + k;
	}
	if (k == s)
		return true;
	return false;
}
void TimDong(int a[][500], int m, int n) {
	int SoHTMax = 0;
	int DongCoSHTMax[500];
	int dem = 0;

	for (int i = 0; i < m; i++) {
		int SoHT = 0;
		for (int j = 0; j < n; j++) {
			if (KT(a[i][j])) {
				SoHT++;
			}
		}

		if (SoHT > SoHTMax) {
			SoHTMax = SoHT;
			dem = 1;
			DongCoSHTMax[0] = i;
		}
		else if (SoHT == SoHTMax) {
			DongCoSHTMax[dem++] = i;
		}
	}

	cout << "Cac dong co nhieu so hoan thien nhat la: " << endl;
	for (int i = 0; i < dem; i++) {
		cout << "Dong " << DongCoSHTMax[i] << endl;
	}
}

int main()
{
	int a[500][500];
	int m, n;
	Nhap(a, m, n);
	TimDong(a, m, n);
	return 0;
}