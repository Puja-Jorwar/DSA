#include <iostream>
#include <list>
using namespace std;

// List -> similar to vector , it also gives front operation as well

void expalinList()
{
    list<int> ls;

    ls.push_back(2);    //{2}
    ls.emplace_back(4); //{2,4}

    ls.push_front(3);    //{3,2,4}
    ls.emplace_front(5); //{5,3,2,4}

    // rest functions same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap
}
int main()
{
    return 0;
}