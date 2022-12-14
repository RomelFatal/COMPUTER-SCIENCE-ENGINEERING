//// Created by Romel Fatal on 11/6/22.
//// This program passes a STRUCTURE variable to one function
//// by reference and to another as a constant reference.
//#include <iostream>
//#include <iomanip>
//#include <string>
//using namespace std;
//
//struct InvItem{                 // Holds data for an inventory item
//    int partNum;                // Part number
//    string description;         // Item description
//    int onHand;                 // Units on hand
//    double price;               // Unit price
//};
//
//// Function prototypes
//void getItemData(InvItem &);    // Function getItemData will receive an
//                                // InvItem STRUCTURE passed to it by
//                                // reference so new values can be stored
//                                // in its member variables.
//
//void showItem(const InvItem &);
//                                // Function showItem will receive an
//                                // InvItem STRUCTURE passed to it as a
//                                // constant reference because showItem
//                                // just needs display member variable
//                                // values, not change them.
//int main() {
//    InvItem part;               // Define an InvItem STRUCTURE variable.
//
//    getItemData(part);
//    showItem(part);
//    return 0;
//}
//
///********************************************************************
// *                          getItemData                             *
// * This function stores data input by the user in the members of an *
// * InvItem STRUCTURE variable passed to the function by reference.  *
// ********************************************************************/
// void getItemData(InvItem &item) {
//    cout << "Enter the part number: ";
//    cin  >> item.partNum;
//    cout << "Enter the part description: ";
//    cin.get();                  // Move past the '\n' left in the
//                                // input buffer by the last input.
//    getline(cin, item.description);
//    cout << "Enter the quantity on hand: ";
//    cin  >> item.onHand;
//    cout << "Enter the unit price: ";
//    cin  >> item.price;
//}
//
///********************************************************************
// *                              showItem                            *
// * This function displays the data stored in the members of an      *
// * InvItem STRUCTURE variable passed to it as a constant reference. *
// ********************************************************************/
// void showItem(const InvItem &item) {
//     cout << fixed << showpoint << setprecision(2) << endl;
//     cout << "Part Number  : "  << item.partNum << endl;
//     cout << "Description  : "  << item.description << endl;
//     cout << "Units On Hand: "  << item.onHand << endl;
//     cout << "Price        : $" << item.price << endl;
// }
//
//
//// Enter the part number: 800
//// Enter the part description: Screwdriver
//// Enter the quantity on hand: 135
//// Enter the unit price: 1.25
//
//// Part Number  : 800
//// Description  : Screwdriver
//// Units On Hand: 135
//// Price        : $1.25