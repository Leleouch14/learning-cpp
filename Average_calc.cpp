#include <iostream>
using namespace std;

int main() {
  int num1{}, num2{}, num3{};
  int total{};
  double result;
  const int count{3};
  cout << "enter 3 int seperated by space: ";
  cin >> num1 >> num2 >> num3;
  cout << "Your number 1 is: " << num1 << " Number 2 is: " << num2 << " number 3 is: " << num3 << endl;
  total = num1 + num2 + num3;
  result = static_cast<double>(total) / count;
  cout << result;
}