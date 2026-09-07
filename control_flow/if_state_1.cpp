#include <iostream>
using namespace std;

int main() {
    int num1 {};
    const int lower{10};
    const int upper{100};
    cout << boolalpha;
    bool greater(false);
    bool smalelr(false);
    
    cout << "enter a number greater than 10 but less than 100: " << endl;
    cin >> num1;
    
    if (num1 > lower && num1 < upper) {
        cout << "Number is greater than 10? ";
        greater = (num1 > lower);
        cout << greater << endl;
        cout << "Number is smaller than 100? ";
        smalelr = (num1 < upper);
        cout << smalelr << endl;
        } else if (num1 == upper || num1 == lower) {
            cout << "number cannot be " << lower << " or " << upper << " itself" << endl;
        } else if (num1 > upper) {
            cout << "number is larger than 100" << endl;
        } else if (num1 < lower) {
            cout << "The number is smaller than 10" << endl;
        }
    
}