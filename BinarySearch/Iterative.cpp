#include <iostream>
#include <vector>
using namespace std;
//Iterative Approach
int binary_search(vector<int> &a, int target)
{
    int n = a.size();
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (a[mid] == target)
            return mid;
        else if (target < a[mid])
            high = mid - 1;
        else    
            low = mid + 1;
    }
    return -1;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    vector<int> a = {1, 2, 3, 4, 6, 7, 8, 9, 10};
    int target = 6;
    int res = binary_search(a, target);
    if (res == -1)
        cout << "not present";
    else
        cout << "target is at index  " << res;
    return 0;
}