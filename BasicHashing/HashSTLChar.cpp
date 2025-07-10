#include <iostream>
#include <map>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string s;
    cin >> s;
    // pre-compute
    map<char, int> mpp;
    for (int i = 0; i < s.size(); i++)
    {
        mpp[s[i]]++;
    }

    int q;
    cin >> q;
    while (q--)
    {
        char c;
        cin >> c;
        cout << mpp[c] << endl;
    }

    return 0;
}

//TC
//log n