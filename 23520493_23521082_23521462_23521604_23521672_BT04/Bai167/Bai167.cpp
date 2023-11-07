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
    int max = -1e9, s;
    int t1, t2;
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
            if (s < 0 && s > max)
            {
                max = s;
                t1 = i;
                t2 = j;
            }
        }
    }
    if (max == -1e9)
    {
        cout << "Khong tim thay ma tran con 3x3 toan am trong ma tran" << endl;
    }
    else
    {
        cout << "Ma tran con 3x3 toan am cuoi cung trong ma tran la:" << endl;
        for (int i = t1; i < t1 + 3; i++)
        {
            for (int j = t2; j < t2 + 3; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
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