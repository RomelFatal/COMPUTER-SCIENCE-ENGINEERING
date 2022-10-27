// This program reads a set of daily high temperatures from a file
// and displays them. It demonstrates how to pass a file to a
// function. The function argument, which is a file stream object,
// must be passed by reference.
// Created by Romel on 10/25/22.
#include <iostream>
#include <fstream>
using namespace std;

void readFile(ifstream&);               // Function prototype

int main() {
    ifstream inputFile;

    inputFile.open("weather.dat");
    if (inputFile.fail())
        cout << "Error opening data file.\n";
    else {
        readFile(inputFile);
        inputFile.close();
    }
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

/*********************************************************
*                      readFile                          *
*  This function reads and displays the contents of the  *
*  input file whose file stream object is passed to it.  *
**********************************************************/
void readFile(ifstream &someFile) {
    int temperature;

    while (someFile >> temperature)
        cout << temperature << "   ";
    cout << endl;
}

// 72   83  71  69  75  77  70