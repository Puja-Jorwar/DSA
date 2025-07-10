#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    //cin >> arr[0] >> arr[1] >> arr[2];
    cout << "Enter array of 5 digits: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    arr[3] += 10;
    arr[2] = 88;

    cout << "no at third place: " << arr[2];

    return 0;
}

//similar datatypes
//array elements store in consicutive way
