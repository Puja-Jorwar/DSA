#include <iostream>
#include <vector>
using namespace std;

// XOR approach
// a ^ a = 0, XOR of two same numbers results in 0.
// a ^ 0 = a, XOR of a number with 0 always results in that number.
int XOR_approach(vector<int>& nums)
{

    int n = nums.size();
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ nums[i];
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
    cout << XOR_approach(nums);
    return 0;
}