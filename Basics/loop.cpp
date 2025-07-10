#include <iostream>
using namespace std;

int main()
{

    for (int i = 1; i < 10; i = i + 1)
    {
        cout << "I will do it" << endl;
    }

    int k = 1;
    while (k <= 5)
    {
        cout << "puja";
        k = k + 1;
    }

    // do while--run minimum of one time

    int j = 1;
    do
    {
        cout << "puja" << endl;
        j = j + 1;
    } while (j <= 4);
    return 0;
}