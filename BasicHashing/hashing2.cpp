#include <iostream>
using namespace std;
// hashing-> prestoring and fetching

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Precompute
    int hash[13] = {0};
    //{0}->this is garbage value, globall it is 0 b default
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }
    int q;
    cin >> q;
    while (q--)
    {
        int number;
        cin >> number;
        // fetch
        cout << hash[number] << endl;
    }

    return 0;
}

// maximum size of hash array you can declare is 10^6 as integer inside main
// but if you declare globally like int arr[1e7]; it will be work

// for boolean int main 10 ^7
globally 10 ^ 8