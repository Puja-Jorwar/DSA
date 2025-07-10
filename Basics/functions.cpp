#include <iostream>
using namespace std;

// * Functions are set of code which performs something for you
// * Functions are used to modularise code
// * Functions are used to increase readability
// * Functions are used to use same code multiple times
// void ->doesnt returns anything
// return
// parameterised
// non parameterised

// void printName() {
//     cout <<  "puja";
// }

// int main()
// {
//     printName();

//     return 0;
// }

// void printName(string name)
// {
//     cout << "hey " << name;
// }
// int main()
// {
//     string name;
//     cout << "Enter name:" << endl;
//     cin >> name;
//     printName(name);

//     string name2;
//     cout << "Enter name2: ";
//     cin >> name2;
//     printName(name2);
//     return 0;
// }

// Take two numbers and print its sum

// void num(int a, int b)
// {
//     cout << "sum is " << a + b;
// }
// int main()
// {
//     int a;
//     cout << "enter no 1: " << endl;

//     cin >> a;
//     int b;
//     cout << "enter no2: " << endl;
//     cin >> b;
//     num(a, b);

//     return 0;
// }

// int sum(int num1, int num2)  //void int long long double anything
// {
//     int num3 = num1 + num2;
//     return num3;
// }
// int main()
// {
//     int a, b;
//     cin >> a >> b;
//     int res = sum(a, b);
//     cout << res;
//     return 0;
// }

// inbuilt functions  min, max

// int main()
// {
//     int num1, num2;
//     cin >> num1 >> num2;
//     int minimum = min(num1, num2);
//     cout << minimum;

//     return 0;
// }

// int maxx(int num1, int num2)
// {
//     if (num1 >= num2)
//     {
//         return num1;
//     }
//     return num2; // make sure if u r using datatypes instead void make sure to return some vale otherwise it will give u garbage value
// }

// int main()
// {
//     int num1, num2;
//     cin >> num1 >> num2;
//     int minimum = min(num1, num2);
//     cout << minimum;
//     return 0;
// }

// passed by  values

// void dosomething(int num)
// {
//     cout << num << endl;
//     num += 5;
//     cout << num << endl;
//     num += 5;
//     cout << num << endl;
// }

// void str(string &s)
// {
//     s[0] = 't';
//     cout << s << endl;
// }

// int main()
// {
//     int num = 10;
//     dosomething(num);
//     cout << num << endl;

//     string s = "raj";
//     str(s);
//     cout << s << endl;

//     return 0;
// }

// pass by reference->attached '&' means its dealing with the original value

// array always go with reference
void array(int arr[], int n)
{
    arr[0] += 100;
    cout << "array inside function " << arr[0] << endl;
}
int main()
{
    int n = 5;
    int arr[n];
    for (int i = 0; i < n; i += 1)
    {
        cin >> arr[i];
    }
    array(arr, n);

    cout << "value inside the main: " << arr[0] << endl;
    return 0;
}