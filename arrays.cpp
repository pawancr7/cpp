// #include <iostream>
// using namespace std;
// int main()
// {
//     string colours[5] = {"red", "yelo", "blu", "blck", "ornge"};
//     colours[2] = "titans";
//     cout << colours[2] << endl;
//     return 0;
// }

// Loop Through an Array

#include <iostream>
using namespace std;

int main()
{
    string colours[4] = {"volvo", "mercedes", "ford", "manza"};
    for (int i = 0; i < 4; i++)
    {
        cout << colours[i] << endl; // outputs all elements in the colours array:
    }
    // {
    //     cout << i << ":" << colours[i] << endl; //outputs the index of each element together with its value
    // }

    return 0;
}