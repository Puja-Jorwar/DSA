#include <iostream>
#include <vector>
using namespace std;

bool searchInRotatedwithDuplicates(vector<int> arr, int x)
{
    int n = arr.size();
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (x == arr[mid])
        {
            return true;
        }

        // edge case
        if (arr[low] == arr[mid] && arr[mid] == arr[high])
        {
            low = low + 1;
            high = high - 1;
            continue;
        }
        if (arr[low] <= arr[mid])
        {
            if (x >= arr[low] && x <= arr[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else
        {
            if (x >= arr[mid] && x <= arr[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return false;
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
    bool res = searchInRotatedwithDuplicates(arr, x);
    if (!res)
    {
        cout << "not present";
    }
    else
    {
        cout << res << endl;
    }

    return 0;
}