// Created by Romel Fatal on 11/10/22.
/*
 * THE CLASS INTERFACE
 * -------------------
 * The balance, intRate, interest, and transactions member variables are private, so they are hidden from the world
 * outside the class. This is because a programmer with direct access to these variables might unknowingly commit any
 * of the following errors:
 *
 *      - A deposit or withdrawal might be made without the transactions member being incremented.
 *      - A withdrawal might be made for more than is in the account. This will cause the balance member to have a
 *          negative value.
 *      - the interest rate might be calculated and the balance member adjusted, but the amount of interest might not
 *          get recorded in the intRate member.
 *      - The wrong interest rate might be used.
 *
 * Because of the potential for these errors, the class contains public member functions that ensure the proper steps
 * are taken when the account is manipulated.
 *
 *
 * IMPLEMENTING THE CLASS
 * ----------------------
 * - Program17 shows an implementation of the Account class. It presents a menu for displaying a savings account's
 *   balance, number of transactions, and interest earned. It also allows the user to deposit an amount into the
 *   account, make a withdrawal from the account, and calculate the interest earned for the current period.
 * */


// This client program uses the Account class to perform simple
// banking operations. This file should be combined into a
// project along with the Program17.h and Program17-Account.cpp files.
#include <iostream>
#include <iomanip>
#include "Program17.h"
using namespace std;

// Function prototypes
void displayMenu();
char getChoice(char);
void makeDeposit(Account &);
void withdraw(Account &);

int main() {
    const char MAX_CHOICE = '7';
    Account savings;                // Account object to model savings account
    char choice;

    cout << fixed << showpoint << setprecision(2);
    do {
        displayMenu();
        choice = getChoice(MAX_CHOICE);     // This returns only '1' - '7'
        switch (choice) {
            case '1': cout << "The current balance is $";
                      cout << savings.getBalance() << endl;
                      break;
            case '2': cout << "There have been ";
                      cout << savings.getTransactions()
                           << " transactions.\n";
                      break;
            case '3': cout << "Interest earned for this period: $";
                      cout << savings.getInterest() << endl;
                      break;
            case '4': makeDeposit(savings);
                      break;
            case '5': withdraw(savings);
                      break;
            case '6': savings.calcInterest();
                      cout << "Interest added.\n";
        }
    } while(choice != '7');

    return 0;
}

/*****************************************************************
 *                        displayMenu                            *
 * This function displays the user's menu on the screen.         *
 *****************************************************************/
 void displayMenu() {
     cout << "\n\n                MENU\n\n";
     cout << "1) Display the account balance\n";
     cout << "2) Display the number of transactions\n";
     cout << "3) Display interest earned for this period\n";
     cout << "4) Make a deposit\n";
     cout << "5) Make a withdrawal\n";
     cout << "6) Add interest for this period\n";
     cout << "7) Exit the program\n\n";
     cout << "Enter your choice: ";
 }

/*****************************************************************
 *                            getChoice                          *
 * This function gets, validates, and returns the user's choice. *
 *****************************************************************/
char getChoice(char max) {
    char choice = cin.get();
    cin.ignore();               // Bypass the '\n' in the input buffer

    while (choice < '1' || choice > max) {
        cout << "Choice must be between 1 and " << max << ". "
             << "Please re-enter choice: ";
        choice = cin.get();
        cin.ignore();          // Bypass the '\n' in the input buffer
    }
    return choice;
}

/*****************************************************************
 *                         makeDeposit                           *
 * This function accepts a reference to an Account object.       *
 * The user is prompted for the dollar amount of the deposit,    *
 * and the makeDeposit member of the Account object is           *
 * then called.                                                  *
 *****************************************************************/
 void makeDeposit(Account &account) {
     double dollars;

     cout << "Enter the amount of the deposit: ";
     cin  >> dollars;
     cin.ignore();
     account.makeDeposit(dollars);
 }

/****************************************************************
 *                        withdraw                              *
 * This function accepts a reference to an Account object.      *
 * The user is prompted for the dollar amount of the withdrawal,*
 * and the withdraw member of the Account object is then called.*
 ****************************************************************/
 void withdraw(Account &account) {
     double dollars;

     cout << "Enter the amount of the withdrawal: ";
     cin  >> dollars;
     cin.ignore();
     if (!account.withdraw(dollars))
         cout << "ERROR: Withdrawal amount too large.\n\n";
 }