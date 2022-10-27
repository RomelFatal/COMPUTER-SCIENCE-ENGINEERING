// This program uses overloaded functions.
// Created by Romel on 10/26/22.
#include <iostream>
#include <iomanip>
using namespace std;

// Function prototype
int square(int);
double square(double);

int main() {
    int userInt;
    double userReal;

    // Get an int and a double
    cout << "Enter an integer and a floating-point value: ";
    cin  >> userInt >> userReal;

    // Display their squares
    cout << "Here are their squares: ";
    cout << fixed << showpoint << setprecision(2);
    cout << square(userInt) << " and " << square(userReal) << endl;
    return 0;
}

/***************************************************
*            overload function square              *
*  This function returns the square of the value   *
*  passed into its int parameter.                  *
****************************************************/
int square(int number) {
    return number * number;
}

/***************************************************
*            overload function square              *
*  This function returns the square of the value   *
*  passed into its double parameter.               *
****************************************************/
double square(double number) {
    return number * number;
}

// Enter an integer and a floating-point value: 12  4.2[Enter]
// Here are their squares:  144 and 17.64