#include <iostream>
#include <iomanip>
#define max 100
using namespace std;

void NhapMTMe(float[][max], int&, int&);
void NhapMTCon(float[][max], int&, int&);
int KT(float[][max], int, int,float[][max], int, int);
void Xuat(float[][max], int, int, float [][max],int, int);

void NhapMTMe(float a[][max], int& m, int& n) {
	cout << "Nhap ma tran me" << endl;
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
	cout << "Ma tran me la: " << endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++)
			cout << fixed << setw(4) << setprecision(1) << a[i][j] << " ";
		cout << endl;

	}
}
void NhapMTCon(float b[][max], int& k, int& l) {
	cout << "Nhap ma tran con" << endl;
	cout << "Nhap k: ";
	cin >> k;
	cout << "Nhap l: ";
	cin >> l;
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < l; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "]= ";
			cin >> b[i][j];
		}
	}
	cout << "Ma tran con la: " << endl;
	for (int i = 0; i < k; i++) {
		for (int j = 0; j < l; j++)
			cout << fixed << setw(4) << setprecision(1) << b[i][j] << " ";
		cout << endl;

	}
}
int KT(float a[][max], int m, int n, float b[][max], int k, int l) {
	if (m > k || n > l)
		return 0;
	int flag = 0;
	for (int d = 0; d <= k - m; d++)
		for (int c = 0; c <= l - n; c++) 
		{
			int co = 1;
			for (int i = 0; i < m; i++)
				for (int j = 0; j < n; j++)
					if (a[i][j] != b[d + i][c + j])
						co = 0;
			if (co == 1)
				flag = 1;
		}
	return flag;
}
void Xuat(float a[][max], int m, int n, float b[][max], int k, int l) {
	if (KT(a,m,n,b,k,l)== 1)
		cout << "Khong phai la ma tran con " << endl;
	cout << "La ma tran con " << endl;
}

int main()
{
	float a[max][max];
	float b[max][max];
	int m = sizeof(a) / sizeof(a[0]);
	int n = sizeof(a[0]) / sizeof(a[0][0]);
	int k = sizeof(b) / sizeof(b[0]);
	int l = sizeof(b[0]) / sizeof(b[0][0]);
	NhapMTMe(a, m, n);
	NhapMTCon(b, k, l);
	KT(a, m, n,b, k, l);
	Xuat(a, m, n,b,k,l);
	return 0;
}