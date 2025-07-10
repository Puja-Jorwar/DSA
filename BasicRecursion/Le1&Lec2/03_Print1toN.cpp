#include <iostream>
#include <cstdio>

using namespace std;

void name(int cnt, int n)
{
    if (cnt > n)
        return;
    cout << cnt << endl;

    name(cnt + 1, n);
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    name(1, n);
    return 0;
}