//// Created by Romel Fatal on 11/5/22.
//// This program demonstrates the use of a STRUCTURE
//#include <iostream>
//#include <iomanip>
//#include <string>
//using namespace std;
//
//struct PayRoll {
//    int    empNumber;   // Employee number
//    string name;        // Employee name
//    double hours,       // Hours worked
//           payRate;     // Hourly pay rate
//};
//
//int main() {
//    PayRoll employee;   // Employee is a PayRoll STRUCTURE
//    double grossPay;    // Gross amount the employee earned this week
//
//    // Get the employee's data
//    cout << "Enter the employee's number: ";
//    cin  >> employee.empNumber;
//
//    cout << "Enter the employee's name: ";
//    cin.ignore();       // Ski; the '\n' character left in the input buffer
//    getline(cin, employee.name);
//
//    cout << "Hours worked this week: ";
//    cin  >> employee.hours;
//
//    cout << "Employee's hourly pay rate: ";
//    cin  >> employee.payRate;
//
//    // Calculate the employee's gross pay
//    grossPay = employee.hours * employee.payRate;
//
//    // Display the results
//    cout << "\nHere is the employee's payroll data:\n";
//    cout << "Name:            " << employee.name << endl;
//    cout << "Employee number: " << employee.empNumber << endl;
//    cout << "Hours worked:    " << employee.hours << endl;
//    cout << "Hourly pay rate: " << employee.payRate << endl;
//    cout << fixed << showpoint  << setprecision(2);
//    cout << "Gross pay:      $" << grossPay << endl;
//    return 0;
//}
//
//
//// Enter the employee's number: 2214
//// Enter the employee's name: Jack Smith
//// Hours worked this week: 40
//// Employee's hourly pay rate: 12.50
////
//// Here is the employee's payroll data:
//// Name:            Jack Smith
//// Employee number: 2214
//// Hours worked:    40
//// Hourly pay rate: 12.5
//// Gross pay:      $500.00