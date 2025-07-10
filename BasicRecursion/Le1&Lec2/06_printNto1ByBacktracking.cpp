#include <iostream>
using namespace std;
void f(int i, int n)
{
    if (i > n)
    {
        return;
    }

    f(i + 1, n);
    cout << i << endl;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    f(1, n);
    return 0;
}