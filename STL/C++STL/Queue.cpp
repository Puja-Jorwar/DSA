#include <bits/stdc++.h>
using namespace std;

// Queue
// all operations happens in constant time.
void explainStack()

    void explainQueu()
{
    queue<int> q;
    q.push(1); //{1}
    q.push(2); //{1,2}
    q.push(3); //{1,2,3}
    q.emplace(4); //{1,2,3,4}

    q.back() += 5; //{1,2,3,9}

    cout << q.back(); //9

    cout << q.front(); //1

    q.pop(); //{2,3,9}

    cout << q.front(); //2

    //size swap empty same as stack
}
int main()[
    return 0;
]