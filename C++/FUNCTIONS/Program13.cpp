// This program uses a function that returns TRUE or FALSE.
// Created by Romel on 10/23/22.
#include <iostream>
using namespace std;

// Function prototype
bool isEven(int);

int main() {
    int val;                // the value to be tested

    // Get a number from the user
    cout << "Enter an integer and I will tell you ";
    cout << "if it is even or odd: ";
    cin >> val;

    // Indicate whether it is even or odd
    if (isEven(val))
        cout << val << " is even.\n";
    else
        cout << val << " is odd.\n";
    return 0;
}

/********************************************************
*                       isEven                          *
*  This Boolean function tests if the integer argument  *
*  it receives is even or odd. It returns TRUE if the   *
*  argument is even and FALSE if it is odd.             *
*********************************************************/
bool isEven(int number) {
    if (number % 2 == 0)
        return true;            // The number is even if there's no remainder
    else
        return false;           // Otherwise, the number odd
}

// Enter an integer and I will tell you if it is even or add:   5[Enter]
// 5 is odd.