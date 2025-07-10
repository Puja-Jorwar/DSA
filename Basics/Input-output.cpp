#include <iostream>
using namespace std;
/*
A xchool has following rules for grading system:
a. below 25 - F
b. 25 to 44 - E
c. 45 to 49 - D
d. 50 to 59 - C
e. 60 to 79 - B
f. 80 to 100 - A
*/

int main() {
    int g;

    while (true) {
        cout << "Enter Marks (or -1 to exit): ";
        cin >> g;

        if (g == -1) {
            cout << "Exiting..." << endl;
            break;
        }
        else if (g < 0 || g > 100) {
            cout << "Invalid marks!" << endl;
        }
        else if (g <= 24) {
            cout << "Grade: F" << endl;
        }
        else if (g <= 44) {
            cout << "Grade: E" << endl;
        }
        else if (g <= 49) {
            cout << "Grade: D" << endl;
        }
        else if (g <= 59) {
            cout << "Grade: C" << endl;
        }
        else if (g <= 79) {
            cout << "Grade: B" << endl;
        }
        else if (g <= 100) {
            cout << "Grade: A" << endl;
        }
    }

    return 0;
}
