#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int second_largest_ele_with_sorting(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    return nums[nums.size() - 2];
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
    cout << second_largest_ele_with_sorting(nums);
    return 0;
}
//Time Complexity : O(NlogN), For sorting the array