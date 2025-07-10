#include <bits/stdc++.h>
using namespace std;

//Multiset -> sorted like set but , not unique(store duplicate ele also)

void expalinMultiset(){
    multiset<int>ms;
    ms.insert(1); //{1}
    ms.insert(1); //{1,1}
    ms.insert(1);//{1,1,1}

    ms.erase(1); //all 1's erased

    int cnt = ms.count(1); 

    ms.erase(ms.find(1)); //only a single 1 erased (erase address)

    ms.erase(ms.find(1), ms.find(1)+2);

    //rest all functions are same

}

int main(){
    return 0;
}