#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// 🔴 Bug: arr.size() is invalid for raw arrays

// int n = arr.size(); // ❌ Invalid
int largest_ele_in_array(int arr[], int n)
{

    int large = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= large)
        {
            large = arr[i];
        }
    }
    return large;
}
int recursive_approach(int arr[], int n, int i, int large)
{

    if (arr[i] >= large)
    {
        large = arr[i];
    }

    if (i == n - 1)
    {
        return large;
    }

    return recursive_approach(arr, n, i + 1, large);
}
// with sorting
int largest_ele_with_sorting(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    return nums[nums.size() - 1];
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    // int arr[n];
    //  for (int i = 0; i < n; i++)
    //  {
    //      cin >> arr[i];
    //  }
    //  cout << largest_ele_in_array(arr, n) << endl;
    //  cout << recursive_approach(arr, n, 0, 0);
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    cout << largest_ele_with_sorting(nums
    );
    return 0;
}