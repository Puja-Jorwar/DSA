#include <bits/stdc++.h>
using namespace std;

//Map -> key value, keys are unique, key can be an data type
//stores unique keys too sorted order 

void explainMap(){
    map<int, int>mp;

    map<int,pair<int, int>>mp;

   

    mp[1] = 2;
    mp.emplace({3,2});
    mp.insert({2,4});
    //{{1,2},{2,4},{3,2}} -> store in sorted order of key nt value

    map<pair<int, int>, int> mp;
    mp[{2,3}] = 10;

    //for each loop
    for(auto it : mp) {
        cout << it.first << " " << it.second << endl; //it.first->1,it.second->2 ...
    }

    cout << mp[1]; //2  it means value at key 1
    cout << mp[5]; //null or 0  -> value at key 5

    //how to find wherer is key
    auto it = mp.find(3); //point to key 3
    cout << *(it).second;  //print value store in key 3 //2

    auto it = mp.find(5); //point to mp.end()

    auto it = mp.lower_bound(2);

    auto it = mp.upper_bound(3);

    //erase swap size

}
int  main(){
    return 0;
}