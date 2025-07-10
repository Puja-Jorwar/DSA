#include <iostream>
#include <cstdio>

using namespace std;
int cnt = 0;
// void name(int n)
// {
//     if (cnt == n)
//         return;
//     cout << "name" << endl;
//     cnt++;
//     name(n);
// }

void f(int i, int n)
{
    if (i > n)
    {
        return;
    }
    cout << "Puja"<<endl;
    f(i + 1, n);
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

//TC->O(n)