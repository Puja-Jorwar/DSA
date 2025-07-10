#include <iostream>
using namespace std;
// Here ASCII value comes
void f(char c, string &s)
{
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string s;
    cin >> s;

    // Precompute
    int hash[26] = {0}; // Assuming letters are lower case //int hash[256]

    for (int i = 0; i < s.size(); i++) //
    {
        hash[s[i] - 'a']++; // if not lower hash[s[i]]++
    }
    int q;
    cin >> q;
    while (q--)
    {
        char c;
        cin >> c;
        // fetch
        cout << hash[c - 'a'] << endl; // hash[c]
    }

    return 0;
}