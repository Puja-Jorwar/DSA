#include <iostream>
#include <vector>

using namespace std;
// Floor&Ceil
int find_floor(int arr[], int n, int x)
{
    int low = 0;
    int high = n - 1;
    int ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] <= x)
        {
            low = mid + 1;
            ans = arr[mid];
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}
int find_Ceil(int arr[], int n, int x)
{
    int low = 0;
    int high = n - 1;
    int ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] >= x)
        {
            high = mid - 1;
            ans = arr[mid];
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

pair<int, int> getFloorandCeil(int arr[], int n, int x)
{
    int f = find_floor(arr, n, x);
    int c = find_Ceil(arr, n, x);
    return make_pair(f, c);
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
    pair<int, int> ans = getFloorandCeil(arr, n, x);
    cout << "floor: " << ans.first << endl
         << "Ceil: " << ans.second;
    return 0;
}

// O(logN)  TC
// O(1)   SC