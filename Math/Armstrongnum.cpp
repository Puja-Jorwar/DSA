/*
Armstrong number
-> 371  =  3cubee + 7cube + 1cube  =  371
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int dn = n;
    int sum = 0;

    while (dn > 0)
    {
        int lastdg = dn % 10;
        sum += (lastdigit*lastdigit*lastdigit);
        dn = dn / 10;
    }
    if (sum == n)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}

/*
#include <bits/stdc++.h>
using namespace std;

bool isArmstrong(int n) {
    int original = n, sum = 0, digits = 0;
    int temp = n;

    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return sum == original;
}
*/