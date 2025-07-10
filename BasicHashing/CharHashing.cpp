#include <iostream>
using namespace std;
void f(char c, string &s)
{
    int cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == c)
            cnt++;
    }
    cout << cnt << endl;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string s;
    cin >> s;

    char c;

    f('c', s);
    return 0;
}