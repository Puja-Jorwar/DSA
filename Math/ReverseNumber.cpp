#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// reverse number
int main()
{

    int n;
    cin >> n;
    int reversenum = 0;
    while (n > 0)
    {
        int lastdg = n % 10;
        n = n / 10;

        reversenum = (reversenum * 10) + lastdg;
    }
    cout << reversenum;
}

/*
Mistakes:
You created function in main.
you usually forget to define datatype
remember return and cout logic
*/
