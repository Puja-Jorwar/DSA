#include <bits/stdc++.h>
using namespace std;

//priority queue
//Largest element stays at the top
//Time complexity -> push -> log(n), top -> O(1), pop -> log(n)

void explainPQ(){
    priority_queue<int>pq;

    pq.push(5); //{5}
    pq.push(2); //{5,2}
    pq.push(10); //{10,5,2}
    pq.push(8); //{10,8,5,2}

    cout << pq.top(); //10
    pq.pop(); //{8,5,2}

    //size swap empty function same as others

    //Minimum Heap -> keep min value at top
    priority_queue<int,vector<int>,greater<int>>pq;
    pq.push(5); //{5}
    pq.push(8);//{5,8}
    pq.push(2); //{2,5,8}

    cout << pq.top(); //2

}
int main(){
    return 0;
}