#include <bits/stdc++.h>
using namespace std;

// stack
//All the operation in stack are Big O(1) operations, everthing happens in constant time.
void explainStack()
{
    stack<int> st;
    st.push(1);    //{1}
    st.push(3);    //{3,1}
    st.push(4);    //{4,3,1}
    st.emplace(2); //{2,4,3,1}

    // therer are three main functions in stack -> push, pop, top

    cout << st.top(); // 2

    st.pop(); //{4,3,1}

    cout << st.size(); // 3

    cout << st.empty(); //false

    stack<int> s1, s2;
    s1.swap(s2);
}
int main()
{
    return 0;
}