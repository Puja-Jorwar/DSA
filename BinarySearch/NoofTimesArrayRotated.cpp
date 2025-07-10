#include <iostream>
#include <vector>
#include <climits>

// we will find index of minimum element and eventually it will be the no of rotations

using namespace std;
int findKRotation(vector<int> nums)
{
    int low = 0;
    int high = nums.size() - 1;
    int ans = INT_MAX;
    int index = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (nums[low] <= nums[high])
        {
            if (nums[low] < ans)
            {
                index = low;
                ans = nums[low];
            }
            break;
        }
        // left sorted
        if (nums[low] <= nums[mid])
        {
            if (nums[low] < ans)
            {
                index = low;
                ans = nums[low];
            }
            low = mid + 1;
        }
        else
        {
            // if right sorted
            if (nums[mid] < ans)
            {
                index = low;
                ans = nums[low];
            }
            high = mid - 1;
        }
    }
    return index;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    cout << findKRotation(nums);
    return 0;
}