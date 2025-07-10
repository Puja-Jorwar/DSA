#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
        return true;
    if (p1.second > p2.second)
        return false;

    // they are same
    if (p1.first > p2.first)
        return true;
    return false;
}

void explainExtra()
{
    sort(a, a + n);
    // if using vector
    sort(v.begin(), v.end());

    sort(a + 2, a + 4); // sort specific ele

    sort(a, a + n, greater<int>()); // sort in descending order

    // sort your way
    pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};

    // sort it according to increasing second element
    // if second element is same, then sort
    // it according to first element but in descending

    sort(a, a + n, comp); // comp ->self written comparator  nothing but boolean function

    // {4,1}, {2,1}, {1,2};

    int num = 7;
    int cnt = __builtin_popcount(num);//3 no of 1's in binary number

    long long num2 = 165786578687;
    int cnt = __builtin_popcountll();

    string s = "123";
    sort(s.begin(), s.end());
    do
    {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));

    int maxi = *max_element(a, a + n);
}
int main()
{
    explainExtra();
    return 0;
}
