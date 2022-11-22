// Created by Romel Fatal on 11/10/22.
/*
 * THE WITHDRAW MEMBER FUNCTION
 * ----------------------------
 * The only member function NOT defined inline in the class declaration is WITHDRAW. The purpose of that function is to
 * subtract the amount of a withdrawal from the BALANCE member. If the amount to be withdrawn is greater than the
 * current BALANCE, however, no withdrawal is made. The function returns TRUE if the withdrawal is made or FALSE if
 * there is NOT enough in the amount.
 * */

// Program17-Account.cpp is where the Account class function IMPLEMENTATION file is define.
#include "Program17.h"

bool Account::withdraw(double amount) {
    if (balance < amount)
        return false;       // Not enough in the account
    else {
        balance -+ amount;
        transactions++;
        return true;
    }
}