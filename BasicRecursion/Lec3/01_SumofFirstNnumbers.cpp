#include <iostream>
using namespace std;
// SumofFirstNnumbers
//->using parameters
void f(int i, int sum)
{
    if (i < 1)
    {
        cout << sum;
        return;
    };
    f(i - 1, sum + i);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    f(n, 0);
    return 0;
}

//->using function
// int sum(int n)
// {
//     if (n == 0)
//         return 0;
//     return n + sum(n - 1);
// }

// int main()
// {
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
//     int n;
//     cin >> n;
//     cout << sum(n);
//     return 0;
// }

/*mistake
-> when use void then u can write only return
-> when use int then u have to return something like return 0
*/