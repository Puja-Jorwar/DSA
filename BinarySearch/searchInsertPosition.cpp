#include <iostream>
#include <vector>
using namespace std;
int searchInsertPosition(vector<int> &arr, int n, int x)
{
    int low = 0;
    int high = n - 1;
    int ans = n;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] >= x)
        {

            high = mid - 1;
            ans = mid;
        }
        else
        {
            low = mid + 1;
        }
        return mid;
    }
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
    int ind = searchInsertPosition(arr, n, x);
    cout << ind << endl;
    return 0;
}