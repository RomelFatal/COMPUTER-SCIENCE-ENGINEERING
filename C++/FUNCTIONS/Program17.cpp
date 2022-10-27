// This program has an uninitialized global variable.
// Created by Romel on 10/24/22.
#include <iostream>
using namespace std;

int globalNum;         // Global variable automatically set to zero

int main() {
    cout << "globalNum is " << globalNum << endl;
    return 0;
}

// globalNum is 0