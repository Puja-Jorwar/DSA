#include <iostream>
using namespace std;

// fibonacci number
int fibbo(int n)
{
    if (n <= 1)
        return n;
    int last = fibbo(n - 1);
    int slast = fibbo(n - 2);
    return last + slast;
}
main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    cout << fibbo(n);
    return 0;
}

// O(n the power of n)