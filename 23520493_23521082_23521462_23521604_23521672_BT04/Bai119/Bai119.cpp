#include<iostream>
using namespace std;

bool CASE(int, int);
bool Valo(int, int);
void check(int, int);

int const maxn = 1e3;
int m, n; 
float a[maxn][maxn];
float f[maxn][maxn];


bool CASE(int x, int y) 
{
	if ((x >= 1 && x <= n) && (y >= 1 && y <= m)) return true;
	return false;
}

bool Val(int x, int y) 
{
	if (a[x][y] > 0) return true;
	return false;
}

void check(int x, int y) 
{
	if (CASE(x - 1, y - 1))
		if (Val(x - 1, y - 1)) f[x][y]++;
	if (CASE(x - 1, y))
		if (Val(x - 1, y)) f[x][y]++;
	if (CASE(x - 1, y + 1))
		if (Val(x - 1, y + 1)) f[x][y]++;
	if (CASE(x, y + 1))
		if (Val(x, y + 1)) f[x][y]++;
	if (CASE(x + 1, y + 1))
		if (Val(x + 1, y + 1)) f[x][y]++;
	if (CASE(x + 1, y))
		if (Val(x + 1, y)) f[x][y]++;
	if (CASE(x + 1, y - 1))
		if (Val(x + 1, y - 1)) f[x][y]++;
	if (CASE(x, y - 1))
		if (Val(x, y - 1)) f[x][y]++;

}

int main() 
{

	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> a[i][j];
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			check(i, j);
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cout << f[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}