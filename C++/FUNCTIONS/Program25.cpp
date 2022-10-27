// This program illustrates two appropriate uses
// of passing arguments by refernce.
// Created by Romel on 10/25/22.
#include <iostream>
using namespace std;

// Function prototypes
void getNums(int&, int&);       // Uses REFERENCE PARAMETERS to input
                                // values in the function, but to actually
                                // store them in variables defined in main

void orderNums(int&, int&);     // Uses REFERENCE PARAMETERS to change the
                                // values of existing values stored in main

int main() {
    int small, big;

    // Call getNums to input the two numbers
    getNums(small, big);

    // Call orderNums to put the numbers in order
    orderNums(small, big);

    // Display the new values
    cout << "The two input numbers ordered smallest to biggest are "
         << small << " and " << big << endl;
    return 0;
}

/**********************************************************
*                           getNums                        *
*  This arguments passed into input1 and input2 are passed *
*  by reference so that the values entered into them will  *
*  and big variables.                                      *
************************************************************/
void getNums(int &input1, int &input2) {
    cout << "Enter an integer: ";
    cin >> input1;
    cout << "Enter a second integer: ";
    cin >> input2;
}

/***********************************************************
*                        orderNums                         *
*  This arguments passed into num1 and num2 are passed by  *
*  reference so that if they are out of order main's       *
*  variables small and big can be swapped. Just swapping   *
*  num1 and num2 in orderNum's local memory would not      *
*  accomplish the desired result.                          *
************************************************************/
void doubleNums(int &num1, int &num2) {
    int temp;

    if (num1 > num2) {    // If the numbers are out of order, swap them
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
}

// Enter an integer: 10[Enter]
// Enter a second integer: 5[Enter]
// The two input numbers ordered smallest to biggest are 5 and 10