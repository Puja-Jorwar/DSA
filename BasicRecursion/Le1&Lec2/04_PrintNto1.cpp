#include <iostream>
#include <cstdio>

using namespace std;

void name(int i, int n)
{
    if (i < 1)
        return;
    i << i << endl;

    name(i-1, n);
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    name(n, n);
    return 0;
}