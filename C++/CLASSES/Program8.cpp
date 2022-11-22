//// Created by Romel Fatal on 10/29/22.
//// This program uses a class with a Boolean function that determines
//// if a new value sent to it is the largest value received so far.
//#include <iostream>
//using namespace std;
//
//class SimpleStat {
//    private:
//        int largest;                // The largest number received so far
//        int sum;                    // The sum of the number received
//        int count;                  // How many numbers have been received
//
//        bool isNewLargest(int);     // This is a private class function
//
//    public:
//        SimpleStat();               // Default CONSTRUCTOR
//                                    // Member function prototypes
//        bool addNumber(int);
//        double calcAverage();
//
//        int getLargest() {
//            return largest;
//        }
//
//        int getCount() {
//            return count;
//        }
//};
//
//// SimpleStat Class Implementation Code
//
///****************************************
//*   SimpleStat Default CONSTRUCTOR      *
//*****************************************/
//SimpleStat::SimpleStat() {
//    largest = sum = count = 0;
//}
//
///****************************************
//*        SimpleStat::addNumber          *
//*****************************************/
//bool SimpleStat::addNumber(int num) {
//    bool goodNum = true;
//    if (num >= 0) {             // If num is valid
//        sum += num;             // Add it to the sum
//        count++;                // Count it
//        if(isNewLargest(num))   // Find out if it is
//            largest = num;      // the new largest
//    }
//    else
//        goodNum = false;
//
//    return goodNum;
//}
//
///****************************************
//*        SimpleStat::isNewLargest       *
//*****************************************/
//bool SimpleStat::isNewLargest(int num) {
//    if (num > largest)
//        return true;
//    else
//        return false;
//}
//
///****************************************
//*        SimpleStat::calcAverage        *
//*****************************************/
//double SimpleStat::calcAverage() {
//    if (count > 0)
//        return static_cast<double>(sum) / count;
//    return 0;
//}
//
///****************************************
//*                   main                *
//*****************************************/
//int main() {
//    int num;
//    SimpleStat statHelper;            // SimpleStat object
//
//    cout << "Please enter the set of non-negative integer \n";
//    cout << "values you want to average. Separate them with \n";
//    cout << "spaces and enter -1 after the last value. \n\n";
//
//    cin  >> num;
//    while (num > 0) {
//        statHelper.addNumber(num);
//        cin >> num;
//    }
//    cout << "\nYou entered " << statHelper.getCount() << " values. \n";
//    cout << "The largest value was " << statHelper.getLargest() << endl;
//    cout << "The average value was " << statHelper.calcAverage() << endl;
//
//    return  0;
//}
//
//// Please enter the set of non-negative integer
//// values you want to average. Separate them with
//// spaces and enter -1 after the last value.
//
//// 7 6 8 8 9 7 7 8 9 7 -1[Enter]
//
//// You entered 10 values.
//// The largest value was 9
//// The average value was 7.6