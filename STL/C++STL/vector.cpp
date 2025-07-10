#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

// you have to give to store some  values you will suppose declare a size of array and store it but when we haveto add more it cannnot modiify size of array wherer vectors comes in .

// vector is a container which is dynamic in nature.

// it can vary its size whenever you wish to.

// when you do not know the size of data structure that will be required thats when ou use vector.

void explainVector()
{

    // declared empty array
    vector<int> v;

    // add value in array
    v.push_back(1);

    // it dnamically increase the size and store value.
    // generally faster that push_back
    v.emplace_back(2);

    // define vector as a pair datatype
    vector<pair<int, int>> vec;

    vec.push_back({1, 2});
    vec.emplace_back(3, 4);

    vector<int> v(5, 100); // v(size,instances)==>{100,100,100,100,100}

    vector<int> v(5); // 5 is size and also you can increase using push_bcack

    vector<int> v1(5, 20);
    vector<int> v2(v1);

    // How do we access elements in vector

    // Iterator==> points to the memory wherer elements is store
    vector<int>::iterator it = v.begin();
    it++;
    cout << *(it) << " ";

    it = it + 2;
    cout << *(it) << endl;

    vector<int>::iterator it = v.end();
    // end point is right after the last element not at last element , to access last element we have to do it--

    // mostly never used
    vector<int>::iterator it = v.rend();
    vector<int>::iterator it = v.rbegin();

    cout << v[0];
    cout << v.back();

    // print entire vector
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << endl;
    }

    // some short syntax to print vector
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << endl;
    }

    // using for each loop
    for (auto it : v)
    {
        cout << it << endl;
    }

    // deletion in a vector
    //  {10,20,30}
    v.erase(v.begin() + 1);

    // delete couple of element
    v.erase(v.begin() + 2, v.begin() + 4);

    // Insert function
    vector<int> v(2, 100);         //{100,100}
    v.insert(v.begin(), 300);      //{300,100,100}
    v.insert(v.begin() + 1, 2, 10) //{300,10,10,100,100}

        // insert vector in another vector
        vector<int>
            copy(2, 50);                                //{50,50}
    vector.insert(v.begin(), copy.begin(), copy.end()); //{50,50,300,10,10,100,100}

    //{10,20}
    cout << v.size(); // 2

    //{10,20}
    v.pop_back(); //{10}

    // v1 -> {10,30}
    // v2 -> {30,40}
    v1.swap(v2); // v2 -> {10,30} , v1 -> {30,40}

    v1.clear(); //{}  erase the entire vector

    cout << v.empty(); // empty or not T,F
}

int main()
{
    return 0;
}