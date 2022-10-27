// This program shows that local variables do not retain
// their values between function calls.
// Created by Romel on 10/24/22.
#include <iostream>
using namespace std;

void showLocal();      // Function prototype

int main() {
    showLocal();
    showLocal();
    return 0;
}

/*******************************************************
*                        showLocal                     *
*  This function sets, displays, and then changes the  *
*  value of local variable localNum before returning.  *
********************************************************/
void showLocal() {
    int localNum = 5;       // Local variable

    cout << "localNum is " << localNum << endl;
    localNum = 99;
}

// localNum is 5
// localNum is 5