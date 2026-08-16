#include <iostream>
using namespace std;

int main() {
    int num1{}, num2{};
    cout << boolalpha;
    cout << "enter 2 int seperated by space: ";
    cin >> num1 >> num2;
    cout << "Num1 is: " << num1 << " Num2 is: " << num2 << endl;
    cout << "Num1 > Num2: " << (num1>num2) << endl;
    cout << "num1 < num2: " << (num1<num2) << endl;
    cout << "num1 >= num2: " << (num1>=num2) << endl;
    cout << "num1 <= num2: " << (num1<=num2) << endl;
}