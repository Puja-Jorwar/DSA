#include <iostream>
#include <vector>
#include <climits>

using namespace std;
int minin_rotated_sorted_array(vector<int> nums)
{
    int n = nums.size();

    int low = 0;
    int high = n - 1;

    int ans = INT_MAX;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        // left sorted
        if (nums[low] <= nums[mid])
        {
            ans = min(ans, nums[low]);
            low = mid + 1;
        }
        else
        {
            // if right sorted
            ans = min(ans, nums[mid]);
            // eliminate right half
            high = mid - 1;
        }
    }
    return ans;
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
   cout << minin_rotated_sorted_array(nums); return 0;
}
