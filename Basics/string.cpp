#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Puja";
    cout << s[2] << endl;
    int len = s.size();
    cout << len << endl;
    s[len - 1] = 'p';  //change 
    cout << s[len - 1] << endl;
    return 0;
}