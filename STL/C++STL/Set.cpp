#include <bits/stdc++.h>
using namespace std;

//Set container
//stores in sorted  1.order and 2.unique
//log(n)

void explainSet(){
    set<int>st;
    st.insert(1); //{1}
    st.emplace(3); //{1,3}
    st.insert(3); //{1,3}
    st.insert(2); //{1,2,3}

    //functionality of insert in vector can be used also ,that only increase efficiency

    //begin(), end(), rbegin(), rend(), size(), empty(), swap() are same as those above

    //{1, 2, 3, 4, 5}
    auto it = st.find(3); //returns iterator which points to 3

    auto it = st.find(6); // will point st.end()

    //{1,4,5}
    st.erase(5); //{1,4}

    int cnt = st.count(1);

    auto it = st.find(3);
    st.erase(it);

    //{1,2,3,4,5}
    auto it = st.find(2);
    auto it2 = st.find(4);
    st.erase(it,it2); //{1,4,5}(first,last)

    //lower_bound and upper_bound() function works in the same way as in vector it does

    //This is the syntax
    auto it = st.lower_bound(2);
    auto it = st.upprer_bound(3);

}
int main(){
    return 0;
}