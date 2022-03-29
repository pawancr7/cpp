#include <iostream>
using namespace std;

class employee
{
private:
    int a, b, c;

public:
    void setData(int a1, int b1, int c1); // declaration
    void getData()
    {
        cout << "the value of a is " << a << endl;
        cout << "the value of b is " << b << endl;
        cout << "the value of c is " << c << endl;
    }
};

void employee ::setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    employee king;
    king.setData(3, 6, 8);
    king.getData();
    return 0;
}