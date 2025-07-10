#include <iostream>
using namespace std;

// Not hashing
// imagine if there is very big array 10^10 and 10^10 queries have to count then it will take 100 sec so therer hashing comes

int f(int num, int arr[], int n)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            cnt += 1;
        }
    }
    return cnt;
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
    cout << f(2, arr, n) << " ";

    return 0;
}

// TC -> o(Q*n)