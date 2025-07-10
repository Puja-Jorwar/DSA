#include <iostream>
using namespace std;
int firstOccurrence(vector<int> &nums, int target)
{

    int low = 0;
    int high = nums.size() - 1;
    int first = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (target == nums[mid])
        {
            first = mid;
            high = mid - 1;
        }
        else if (target < nums[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return first;
}
int lastOccurrence(vector<int> &nums, int target)
{
    int low = 0;
    int high = nums.size() - 1;
    int last = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (target == nums[mid])
        {
            last = mid;
            low = mid + 1;
        }
        else if (target > nums[mid])
        {

            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return last;
}
pair<int, int> firstAndLast(int arr[], int n, int x)
{
    int first = firstOccurrence(arr, n, x);
    if (first == -1)
        return {-1, -1};
    int last = lastOccurrence(arr, n, x);
    return {first, last};
}
int count(int arr[], int n, int x)
{
    pair<int, int> ans = firstAndLast(arr, n, x);
    if (ans.first == -1)
        return 0;
    return (ans.second - ans.first + 1);
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cin >> x;
    int res = count(arr, n, x);
    cout << res << endl;
    return 0;
}