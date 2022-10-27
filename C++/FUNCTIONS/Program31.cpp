// This program is a driver for testing the showFees functions
// Created by Romel on 10/26/22.
#include <iostream>
#include <string>
using namespace std;

// Function prototype
void showFees(string, double, int);

int main() {
    cout << "Calling the showFees function with arguments "
         << "Adult,  120.0, 3.\n";
    showFees("Adult", 120.0, 3);

    cout << "Calling the showFees function with arguments "
         << "Child, 60.0, 2.\n";
    showFees("Child", 60.0, 2);

    cout << "Calling the showFees function with arguments "
         << "Senior, 100.0, 4.\n";
    showFees("Senior", 100.0, 4);

    return 0;
}

/*********************************************************
*                     showFees                           *
*  This function uses the membership type, monthly       *
*  rate and number of months passed to it as arguments.  *
*  to compute and print a member's total charges.        *
**********************************************************/
void showFees(string memberType, double rate, int months) {
    cout << endl
         << "Membership Type : " << memberType << "    "
         << "Monthly rate $"     << rate   << endl
         << "Number of months: " << months << endl
         << "Total charges   : $"<<(rate * months)
         << endl << endl;
}

// Calling the showFees function with arguments Adult,  120.0, 3.

// Membership Type : Adult      Monthly rate $120
// Number of months: 3
// Total charges   : $360


// Calling the showFees function with arguments Child,  60.0, 2.

// Membership Type : Child      Monthly rate $60
// Number of months: 2
// Total charges   : $120


// Calling the showFees function with arguments Senior,  100.0, 4.

// Membership Type : Senior      Monthly rate $100
// Number of months: 4
// Total charges   : $400