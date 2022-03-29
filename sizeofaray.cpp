#include <iostream>
using namespace std;
int main()
// Get the Size of an Array
//  sizeof() operator
{
    int mystring[5] = {20, 43, 23, 64, 54};
    int getstring = sizeof(mystring) / sizeof(int);
    cout << getstring;

    return 0;
}