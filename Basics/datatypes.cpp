#include <bits.stdc++.h>
using namespace std;

int main()
{
    // int->4 bytes
    int x = 10;
    // long->8
    long y = 100;
    // long long->8
    long long d = 10000000000;
    // float->4bytes
    float t = 2.3;
    // double-> 8 bytes
    double e = 2.44;
    // long double->10 byts
    long double z = 3.444;
    // string and getline->internal function to entire line of string
    // string will be treated as one word is one string

    string str;
    getline(cin, str);
    cout << str << endl;

    // character 256
    char ch = 'd';
    cout << ch;
    return 0;
}