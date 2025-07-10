#include <iostream>
#include <vector>
using namespace std;
int upper_bound(vector<int> &arr, int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > x)
            return i;
    }
    return n;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cin >> x;
    int ind = upper_bound(arr, n, x);
    cout << ind << endl;
    return 0;
}