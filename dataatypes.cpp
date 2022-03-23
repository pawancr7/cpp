#include <iostream>
using namespace std;

int main()
{
    cout << "Size of char : " << sizeof(char)
         << " bytes" << endl;

    cout << "Size of int :" << sizeof(short int)
         << "bytes" << endl;
    cout << "Size of int :" << sizeof(long int)
         << "bytes" << endl;
    cout << "Size of int : " << sizeof(signed long int)
         << " bytes" << endl;

    cout << "Size of float  :" << sizeof(float)
         << "bytes" << endl;
    cout << "Size of double :" << sizeof(double)
         << "bytes" << endl;
    cout << "size of wchar  :" << sizeof(wchar_t)
         << "bytes" << endl;
    return 0;
}

// {
//      char ch;
//      float f;
//      scanf("%c %f", &ch, &f);
// }

// {
//     char ch = 'd';
//     double d = 234.432;
//     printf("%c %lf", ch, d);
//     return 0;
// }
