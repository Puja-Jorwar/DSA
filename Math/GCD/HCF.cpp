// greatest common divisor

#include <iostream>
using namespace std;
int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    int gcd = 1;
    for (int i = min(n1, n2); i > 1; i--)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            cout << gcd;
            break;
        }
    }
}

// TC -> O(min(n1,n2))