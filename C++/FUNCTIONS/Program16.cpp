// This program shows that a global variable is visible to all functions
// that appear in a program after the variable's definition.
// Created by Romel on 10/24/22.
#include <iostream>
using namespace std;

void anotherFunction();         // Function prototype
int num = 2;                    // Global variable

int main() {
    cout << "In main, num is " << num << endl;
    anotherFunction();
    cout << "Back in main, num is still " << num << endl;
    return 0;
}

/*****************************************************************
*                         anotherFunction                        *
*  This function displays the value of its GLOBAL VARIABLE num.  *
******************************************************************/
void anotherFunction() {
    cout << "In anotherFunction, num is " << num << endl;
    num = 50;
    cout << "But, it is now changed to " << num << endl;
}

// In main, num is 2
// In anotherFunction, num is 2
// But, it is now changed to 50
// Back in main, num is 50