#include <iostream>
using namespace std;

int main()
{

    int a[10][10], b[10][10], i, j, k, n, result[10][10];
    cout << "enter the seize of matrix ";
    cin >> n;
    cout << "enter the first matrix" << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            cin >> a[i][j];
    }
    cout << "enter the sseconf matrix " << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            cin >> b[i][j];
    }
    cout << endl;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            cout << a[i][j] << " ";
    }
    cout << endl;
    // }
    // cout <<endl;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << "Sum of a [" << a[i][j] << "]+b[" << b[i][j] << "]="
                 << a[i][j] + b[i][j] << " " << endl;
        }
    }
    return 0;
}