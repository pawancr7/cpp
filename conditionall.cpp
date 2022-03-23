#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (1 <= n || n <= 9)
    {
        if (n > 9)
        {
            cout << "greater than 09";
        }
        else
        {
            cout << "five";
        }
    }
    return 0;
}
