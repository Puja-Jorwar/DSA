// pairs is the part of utilit library
#include <bits/stdc++.h>
using namespace std;

void explainpair()
{
    pair<int, int> p = {1, 4};
    cout << p.first << " " << p.second;

    pair<int, pair<int, int>> p = {1, {2, 3}};

    cout << p.second.second;

    // pair array
    pair<int, int> arr[] = {{1, 2}, {2, 3}, {3, 4}};

    cout << arr[1].second;
}

int main()
{
    return 0;
}