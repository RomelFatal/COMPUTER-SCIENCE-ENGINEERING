// Created by Romel Fatal on 11/10/22.
// The following listing shows the class declaration.

/*
 * HOME SOFTWARE COMPANY OOP CASE STUDY
 * ------------------------------------
 * You are a programmer for the Home Software Company assigned to develop a class that models the basic workings of a
 * bank account. The class should perform the following tasks:
 *
 *          - Save the account balance.
 *          - Save the number of transactions performed on the account.
 *          - Allow deposits to be made to the account.
 *          - Allow withdrawals to be taken from the account.
 *          - Calculate interest for the period.
 *          - Report the current account balance at any time.
 *          - Report the current number of transactions at any time.
 *
 *
 * PRIVATE MEMBER VARIABLES
 * ------------------------
 * Variable             Description
 * ---------------------------------
 * balance              A double that holds the current account balance
 * intRate              A double that holds the interest rate for the period
 * interest             A double that holds the interest earned for the current period
 * transactions         An integer that holds the current number of transactions
 *
 *
 * PUBLIC MEMBER FUNCTIONS
 * -----------------------
 * Function             Description
 * ---------------------------------
 * constructor          Takes arguments to be initially stored in the balance and intRate members. The default value
 *                      for the balance is zero and the default value for the interest rate is 0.045.
 * makeDeposit          Takes a double argument that is the amount of the deposit. This argument is added to balance.
 * withdraw             Takes a double argument that is the amount of the withdrawal. this value is subtracted from the
 *                      balance, unless the withdrawal amount is greater than the balance. If this happens, the function
 *                      reports an error.
 * calcInterest         Takes no arguments. This function calculates the amount of interest for the current period,
 *                      stores this value in the interest member, and then adds it to the balance member.
 * getBalance           Returns the current balance (stored in the balance member).
 * getInterest          Returns the interest earned for the current period (stored in the interest member).
 * getTransactions      Returns the number of transactions for the current period (stored in the transactions member).
 * */

#ifndef CLASSES_PROGRAM17_H
#define CLASSES_PROGRAM17_H
// Program17.h is where the Account class specification file is define
class Account {
    private:
        double balance;
        double intRate;
        double interest;
        int transactions;

    public:
        // Constructor
        Account(double rate = 0.045, double bal = 0.0) {
            balance = bal;  intRate = rate;
            interest = 0.0; transactions = 0;
        }

        void makeDeposit(double amount) {
            balance += amount;
            transactions++;
        }

        bool withdraw(double amount);       // Define in Program17-Account.cpp

        void calcInterest() {
            interest = balance * intRate;
            balance += interest;
        }

        double getBalance() {
            return balance;
        }

        double getInterest() {
            return interest;
        }

        int getTransactions() {
            return transactions;
        }
};
#endif //CLASSES_PROGRAM17_H