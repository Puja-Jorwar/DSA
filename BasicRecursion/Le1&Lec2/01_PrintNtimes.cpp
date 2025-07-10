#include <iostream>
using namespace std;
// int cnt = 0;
// void f(){
//     cout << cnt;
//     cnt++;
//     f();
// }
int cnt = 0;
void f()
{
    if (cnt == 4)
        return;
    cout << cnt;
    cnt++;
    f();
}
// int main()
// {
//     f();
//     return 0;
// }
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    f();

    return 0;
}

// Recursion
//-> when a function call itself until the specified condition is met.
//->stack overflow/stac space
//-> Base condition -> there are more tpess of condition like multiple base
//->Recursion Tree