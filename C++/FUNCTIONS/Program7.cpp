// This program demonstrates a function with a parameter.
// Created by Romel on 10/23/22.
#include <iostream>
using namespace std;

// Function prototype
void displayValue(int num);

int main() {
    cout << "I am passing several values to displayValue.\n";
    displayValue(5);        // Call displayValue with argument 5
    displayValue(10);        // Call displayValue with argument 10
    displayValue(2);        // Call displayValue with argument 2
    displayValue(16);        // Call displayValue with argument 16
    cout << "Now I am back in main.\n";
    return 0;
}

/**************************************************
*               displayValue                      *
*    This function uses an integer parameter.     *
*    whose value is displayed.                    *
***************************************************/
void displayValue(int num) {
    cout << "The value is " << num << endl;
}

// I am passing several values to displayValue.
// The value is 5
// The value is 10
// The value is 2
// The value is 16
// Now I am back in main.