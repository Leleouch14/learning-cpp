#include <iostream>
using namespace std;
int main() {
    int room_num_small(0);
    int room_num_big(0);
    double sub_total(0);
    double total(0);
    const double tax_rate(0.06);
    const double room_big(5000.00);
    const double room_small(2500.00);
    cout << "-------------Welcome to Param's cleaning services-----------" << endl;
    cout << "Cost of cleaning is ₹" << room_big << "per big room" << endl;
    cout << "Cost of cleaning is ₹" << room_small << "per small room" << endl;
    cout << "Enter no. of small rooms" << endl;
    cin >> room_num_small;
    cout << "Enter no. of big rooms" << endl;
    cin >> room_num_big;
    int small_room_total =  room_small * room_num_small;
    cout << "your total for small rooms is ₹" << small_room_total << endl;
    int big_room_total = room_big * room_num_big;
    cout << "your total for big rooms is ₹" << big_room_total << endl;
    sub_total = small_room_total + big_room_total;
    cout << "tax rate is: " << tax_rate;
    total = sub_total + (sub_total * tax_rate);
    cout << "your total is ₹" << total << endl;
    return 0;
}