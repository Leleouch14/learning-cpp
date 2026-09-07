#include <iostream>
using namespace std;

 int main() {
    int num1{}, num2{};
    cout << boolalpha;
//     cout << "enter 2 int seperated by space: ";
//     cin >> num1 >> num2;
//     cout << "Num1 is: " << num1 << " Num2 is: " << num2 << endl;
//     cout << "Num1 > Num2: " << (num1>num2) << endl;
//     cout << "num1 < num2: " << (num1<num2) << endl;
//     cout << "num1 >= num2: " << (num1>=num2) << endl;
//     cout << "num1 <= num2: " << (num1<=num2) << endl;

const int lower(10);
const int upper(20);
cout << "\nenter an integer that is greater than: " << lower << " and less than "<< upper << endl;
cin >> num1;

bool within_bounds(false);
// within_bounds=(num1>lower && num1<upper);
// cout << num1 << " is between bounds? " << within_bounds << endl;
bool outside_bounds(false);
outside_bounds=(num1<lower || num1>upper);
cout << "the number: " << num1 << " is outside bounds? " << outside_bounds << endl;

 }