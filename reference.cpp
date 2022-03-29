// Pass By Reference

#include <iostream>
using namespace std;
int myfunction(int &a, int &b)
{

    int temp = a;
    a = b;
    b = temp;
}
int main()

{
    int x = 3;
    int y = 5;
    cout << "before swap :" << endl;
    cout << x << y << endl;
    myfunction(x, y);
    cout << "after  swap :" << endl;
    cout << x << y << endl;
    return 0;
}

// {
//     int first = 4;
//     int second = 5;

//     cout << " before swap of two number:" << endl;
//     cout << first << second << endl;
//     // Call the function, which will change the values of first  and second
//     myfunction(first, second);
//     cout << "after swap of two number :" << endl;
//     cout << first << second << endl;
//     return 0;
// }