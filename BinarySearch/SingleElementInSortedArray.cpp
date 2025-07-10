#include <iostream>
#include <vector>
using namespace std;
int singleElement(vector<int> nums)
{
    int n = nums.size();
    if (n == 1)
        return nums[0];
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 0)
        {
            if (nums[i] != nums[i + 1])
            {
                return nums[i];
            }
        }
        else if (nums[i] == n - 1)
        {
            if (nums[i] != nums[i - 1])
            {
                return nums[i];
            }
        }
        else
        {
            if (nums[i] != nums[i + 1] && nums[i] != nums[i - 1])
            {
                return nums[i];
            }
        }
    }
    return -1;
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
    cout << singleElement(nums);
    return 0;
}