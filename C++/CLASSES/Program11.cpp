//// Created by Romel Fatal on 10/30/22.
//// This program nests one class inside another. It has a class
//// with a member variable that is an instance of another class.
//#include <iostream>
//using namespace std;
//
//class Rectangle {
//    private:
//        double length;
//        double width;
//    public:
//        void setLength(double len)
//        { length = len; }
//
//        void setWidth(double wid)
//        { width = wid; }
//
//        double getLength()
//        { return length; }
//
//        double getWidth()
//        { return width; }
//
//        double  calcArea()
//        { return length * width; }
//};
//
//class Carpet {
//    private:
//        double pricePerSqYd;
//        Rectangle size;                 // size is an instance of
//                                        // the Rectangle class
//
//    public:
//        void setPricePerYd(double p)
//        { pricePerSqYd = p; }
//
//        void setDimensions(double len, double wid)
//        {
//            size.setLength(len / 3);    // Convert feet to yards
//            size.setWidth(wid / 3);
//        }
//
//        double getTotalPrice()
//        { return (size.calcArea() * pricePerSqYd); }
//};
//
////********************** Client Program **********************
//int main() {
//    Carpet purchase;            // This variable is a Carpet object
//    double pricePerYd;
//    double length;
//    double width;
//
//    cout << "Room length in feet: ";
//    cin  >> length;
//    cout << "Room width in feet : ";
//    cin  >> width;
//    cout << "Carpet price per sq. yard: ";
//    cin  >> pricePerYd;
//
//    purchase.setDimensions(length, width);
//    purchase.setPricePerYd(pricePerYd);
//
//    cout << "\nThe total price of my new " << length << " x " << width
//         << " carpet is $" << purchase.getTotalPrice() << endl;
//
//    return 0;
//}
//
//
//// Room length in feet: 16.5
//// Room width in feet : 12
//// Carpet price per sq. yard: 22.49
////
//// The total price of my new 16.5 x 12 carpet is $494.78