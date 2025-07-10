#include <iostream>
#include <queue>
using namespace std;

// deque
// allows insertion and deletion from both front and back in O(1) time.
void expalindeque()
{
    deque<int> dq;
    dq.push_back(2);    //{2}
    dq.emplace_back(3); //{2,3}

    dq.push_front(3);    //{3,2,3}
    dq.emplace_front(5); //{5,3,2,3}

    dq.pop_back();  //{5,3,2}
    dq.pop_front(); //{3,2}

    dq.back();

    dq.front();

    // rest functions same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap
}
int main()
{
    return 0;
}