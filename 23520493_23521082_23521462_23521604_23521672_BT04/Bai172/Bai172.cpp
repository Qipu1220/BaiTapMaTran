#include <iostream>
using namespace std;

void Nhap(float a[][100], int& m, int& n)
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


void TimMaTranCon(float a[][100], int m, int n)
{
    float max = -1e9, s;
    int row, col;
    for (int i = 0; i <= m - 3; i++)
    {
        for (int j = 0; j <= n - 3; j++)
        {
            s = 0;
            for (int k = i; k < i + 3; k++)
            {
                for (int l = j; l < j + 3; l++)
                {
                    s += a[k][l];
                }
            }
            if (s > max)
            {
                max = s;
                row = i;
                col = j;
            }
        }
    }
    cout << "Ma tran con co tong lon nhat la:" << endl;
    for (int i = row; i < row + 3; i++)
    {
        for (int j = col; j < col + 3; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    float a[100][100];
    int m, n;
    Nhap(a, m, n);
    TimMaTranCon(a, m, n);
    return 0;
}