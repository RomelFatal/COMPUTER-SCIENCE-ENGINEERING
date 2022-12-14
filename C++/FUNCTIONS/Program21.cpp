// This program uses a STATIC LOCAL VARIABLE.
// Created by Romel on 10/25/22.
#include <iostream>
using namespace std;

void showStatic();      // Function prototype

int main() {
    // Call the showStatic function five times
    for (int count = 0; count < 5; count++)
        showStatic();
    return 0;
}

/***************************************************
*                   showStatic                     *
*  This function keeps track of how many times it  *
*  has been called by incrementing a STATIC LOCAL  *
*  VARIABLE, numCalls, each time it is called.     *
****************************************************/
void showStatic() {
    static int numCalls = 0;       // Static local variable

    cout << "This function has been called "
         << ++numCalls << " times. " << endl;
}

// This function has been called 1 times.
// This function has been called 2 times.
// This function has been called 3 times.
// This function has been called 4 times.
// This function has been called 5 times.