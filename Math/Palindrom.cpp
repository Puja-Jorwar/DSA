#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// palindrome
int main()
{

    int n;
    cin >> n;
    int dn = n int reversenum = 0;
    while (dn > 0)
    {
        int lastdg = dn % 10;
        dn = dn / 10;

        reversenum = (reversenum * 10) + lastdg;
    }
    if (reversenum == n)
    {
        cout <<" true";
    }
    else
    {
        cout << "false";
    }
}

// reverse the number and compare to original
// here we have to make duplicate of original number bcoz at the end n will be 0 due to divide by 10