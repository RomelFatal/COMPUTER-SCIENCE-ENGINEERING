// This program demonstrates a function with a parameter.
// Created by Romel on 10/23/22.
#include <iostream>
using namespace std;

// Function prototype
void displayValue(int num);

int main() {
    cout << "I am passing 5 to displayValue.\n";
    displayValue(5);        // Call displayValue with argument 5
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

// I am passing 5 to displayValue.
// The value is 5
// Now I am back in main.