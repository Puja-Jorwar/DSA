#include <iostream>
#include <vector>

using namespace std;
// The lower bound algorithm finds the first or the smallest index in a sorted array where the value at that index is greater than or equal to a given key i.e. x.
// Brute Force Approach
// Naive approach (Using linear search):
int lower_bound(vector<int> arr, int n, int x)
{

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= x)
        {
            return i;
        }
    }
    return n;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    vector<int> arr = {3, 5, 8, 15, 19};
    int n = 5, x = 9;
    int ind = lower_bound(arr, n, x);
    cout << "The lower bound is the index: " << ind << "\n";
    return 0;
}

// O(n)  TC
// O(1)   SC