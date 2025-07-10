// number that has exactly two factors
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 1; i * i <= n; i++) // instaead of i <= sqrt(n)
    {
        if (n % i == 0)
        {
            cnt++;
            if ((n % i != i))
                cnt++;
        }
    }
    if (cnt > 2)
    {
        cout << "false";
    }
    else
    {
        cout << "true";
    }
}

/ TC->O(n)