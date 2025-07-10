#include <iostream>
#include <vector>
using namespace std;
int binary_search(vector<int> &a, int low, int high, int target)
{
    if (low > high)
        return -1;
    int mid = (low + high) / 2;
    if (a[mid] == target)
    {
        return mid;
    }
    else if (target < a[mid])
    {
        return binary_search(a, low, mid - 1, target);
    }
    else
    {
        return binary_search(a, mid + 1, high, target);
    }
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    vector<int> a = {1, 2, 3, 4, 6, 7, 8, 9, 10};

    int res = binary_search(a, 0, a.size() - 1, 6);
    if (res == -1)
        cout << "not present";
    else
        cout << "target is at index  " << res;
    return 0;
}
