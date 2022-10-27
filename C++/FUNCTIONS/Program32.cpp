// Created by Romel on 10/26/22.

/*  Program Design
*
*   Program Steps
*
*   The program must carry out the following general steps:
*       1. Get and validate how many numbers there are to choose from (n).
*       2. Get and validate how many of these numbers must be selected (k).
*       3. Compute the number of ways a set of k items can be selected from a set of n items.
*       4. Report to the player his chance of winning and his probability of winning.
*
*   Program Modules
*   The program will be designed as a set of modules, each having a specific function.
*
*   Little Lotto Program Modules
*   Function Description
*
*   Function               Description
*   ----------------------------------
*   main                   This function explains the “game,” organizes calls to other functions,
*                          and reports results.
*   getLotteryInfo         This function gets and validates the number of numbers to select from
*                          (n) and the number that must be chosen (k).
*   computeWays            This function computes the number of different sets of size k that can be chosen from
*                          n numbers.
*   factorial              This function computes factorials. It is used by computeWays.
*
*
*
*
*   Variables whose values will be input
*   int pickFrom                // Number of numbers available to select from
*   int numPicks                // Number of numbers that must be chosen
*
*   Variables and values whose values will be output
*   long int ways               // Number of different possible selections
*                               // Only 1 of these can "win"
*   1.0 / ways                  // Probability of winning
*
*
*   Detailed Pseudocode for Each Module
*   In a modular program, a separate pseudocode routine should be created to capture the logic of each function.
*   Here is the pseudocode for each function in the Little Lotto program.
*
*
*
*   main
*       Display information on what the program does
*       Call getLotteryInfo             // Puts value in pickFrom and numPicks variables
*       Call computeWays                // Returns number of ways numbers can be selected
*       Store the returned result in the ways variable
*       Display ways and 1 / ways
*   End main
*
*   getLotteryInfo                      // Places inputs in reference variables
*       Input pickFrom
*       While pickFrom < 1 or pickFrom > 12
*           Display an error message
*           Input pickFrom
*       End while
*       Input numPicks
*       While numPicks < 1 or numPicks > pickFrom
*           Display an error message
*           Input pickFrom
*       End while
*   End getLotteryInfo
*
*   computeWays                         // Receives pickFrom as n and numPicks as k
*       Call factorial 3 times to get information for its calculations
*       Return                      factorial(n)
*                       ------------------------------
*                       factorial(k) * factorial (n-k)
*   End computeWays
*
*   factorial                           // Receives number whose factorial is to be calculated
*       factTotal = 1
*       Loop for count = number down to 1
*           factTotal = factTotal * count
*       End Loop
*       Return factTotal
*   End factorial
*/

// This program finds the probability of winning a "mini" lottery when
// the user's set of numbers must exactly match the set drawn by the
// lottery organizers. In addition to main, it uses three functions.
#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void getLotteryInfo(int&, int&);
long int computeWays(int, int);
long int factorial(int);

int main() {
    int pickFrom,               // The number of numbers to pick from
        numPicks;               // The number of numbers to select
    long int ways;              // The number of different possible
                                // ways to pick the set of numbers

    cout << "This program will tell you your probability of "
         << "winning \"Little Lotto\". \n";
    getLotteryInfo(pickFrom, numPicks);
    ways = computeWays(pickFrom, numPicks);

    cout << fixed << showpoint << setprecision(4);
    cout << "\nYour chance of winning the lottery is "
         << "1 chance in " << ways << ".\n";
    cout << "This is a probability of " << (1.0 / ways)     << "\n";
    return 0;
}

/*******************************************************************
*                      getLotteryInfo                              *
* Gets and validates lottery info. from the user and places it in  *
* reference parameters referencing variables in the main function. *
********************************************************************/
void getLotteryInfo(int &pickFrom, int &numPicks) {
    cout << "\nHow many numbers (1-12) are there to pick from? ";
    cin  >> pickFrom;
    while (pickFrom < 1 || pickFrom > 12) {
        cout << "There must be between 1 and 12 numbers.\n"
             << "How many numbers (1-12) are there to pick from? ";
        cin  >> pickFrom;
    }
    cout << "How many numbers must you pick to play? ";
    cin  >> numPicks;
    while (numPicks < 1 || numPicks > pickFrom) {
        if (numPicks < 1)                           // too few picks
            cout << "You must pick at least one number.\n";
        else                                        // too many picks
            cout << "You must pick " << pickFrom << " or fewer numbers.\n";

        cout << "How many numbers must you pick to play? ";
        cin  >> numPicks;
    }
}

/************************************************************************
*                       computeWays                                     *
* Computes and returns the number of different possible sets            *
* of k numbers that can be chosen from a set of n numbers.              *
* The formula for this is   n!                                          *
*                        --------
*                        k!(n-k)!                                       *
*************************************************************************/
// Note that the computation is done in a way that does not require
// multiplying two factorials together. This is done to prevent any
// intermediate result becoming so large that it causes overflow.
long int computeWays(int n, int k) {
    return (factorial(n) / factorial(k) / factorial(n - k));
}

/*******************************************************************
*                           factorial                              *
* Computes and returns the factorial of the non-negative integer   *
* passed to it. n! means n * (n-1) * (n-2)... * 1                  *
* 0! is a special case and is defined to be 1.                     *
********************************************************************/
// Notice that if number equals 0, the loop condition will
// initially be false and the loop will never be executed.
// This will, correctly, leave factTotal = 1.
long int factorial(int number) {
    long int factTotal = 1;

    for (int count = number; count >= 1; count--) {
        factTotal *= count;
    }
    return factTotal;
}

// This program will tell you your probability of winning "Little Lotto".

// How many numbers (1-12) are there to pick from?  10[Enter]
// How many numbers must you pick to play?  3[Enter]

// Your chance of winning the lottery is 1 chance in 120.
// This is a probability of 0.0083