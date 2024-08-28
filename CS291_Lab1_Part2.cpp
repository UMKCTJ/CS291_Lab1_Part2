// Name: Terrence Jay
// Program: Lab 1, Part 2
// Date:8/28/2024
// Description: Program either generates two random coords or allows users to input them manually. Then calculates which coord is closer to point (0,0)

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // values
    int x1, y1, x2, y2;
    float dist1, dist2;
    char userSelect = 'Y';
    char userSelect2 = 'N';

    while (userSelect == 'Y') {
        cout << "Enter numbers? (Y/N): ";
        cin >> userSelect2;
        userSelect2 = toupper(userSelect2);

        if (userSelect2 == 'Y') {
            cout << "Enter x & y coordinates (pair 1): ";
            cin >> x1 >> y1;
            cout << "Enter x & y coordinates (pair 2): ";
            cin >> x2 >> y2;
        }
        else {
            // number generator
            srand(time(0));
            for (int i = 0; i < 5; i++) {
                x1 = rand() % 21 - 10;
                y1 = rand() % 21 - 10;
                x2 = rand() % 21 - 10;
                y2 = rand() % 21 - 10;
            }
        }

        // distance formula
        dist1 = pow(pow(x1, 2) + pow(y1, 2), .5);
        cout << "Distance from origin to point: ("
            << x1 << ", " << y1 << ") is "
            << dist1 << endl;

        dist2 = pow(pow(x2, 2) + pow(y2, 2), .5);
        cout << "Distance from origin to point: ("
            << x2 << ", " << y2 << ") is "
            << dist2 << endl;

        if (dist1 < dist2)
            cout << "Point (" << x1 << ", " << y1 << ") is closest to origin." << endl;
        else
            cout << "Point (" << x2 << ", " << y2 << ") is closest to origin." << endl;


        // repeater
        cout << "Continue (Y/N): ";
        cin >> userSelect;
        userSelect = toupper(userSelect);
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
