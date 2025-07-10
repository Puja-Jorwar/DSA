#include <iostream>
using namespace std;
//write a program that takes input as age
//and prints if you aree adult or not
//>=18 , yes
//

int main()
{
    int age;

    while (true)
    {
        cout << "enter age (or enter -1 to exit): ";
        cin >> age;

        if (age == -1)
        {
            cout << "Exiting...";
            break;
        }
        else if (age < 18)
        {
            cout << "Not eligible for gob" << endl;
        }
        else if (age <= 57)
        {
            cout << "Eligible for gob";
            if (age >= 55)
            {
                cout << " , retirement soon" << endl;
            }
        }
        else
        {
            cout << "retirement time";
        }
    }
    return 0;
}