#include <iostream>
using namespace std;
int main()
{
    int saving;
    cin >> saving;
    if (saving > 5000)
    {
        if (saving > 10000)
        {
            cout << "bike trp with ruhi";
        }
        else
        {
            cout << "date with ruhi\n";
        }
    }
    else if (saving > 2000)
    {
        cout << "date with mia \n";
    }
    else
    {
        cout << "party with frineds\n ";
    }
    return 0;
}