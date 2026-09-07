#include <iostream>
using namespace std;

int main() {
    int height{};
    int width{};
    int length{};
    double volume{};
    const double mini{2.5};
    double cost{};
    
    cout << "Enter the LENGTH of package in inches: ";
    cin >> length;
    cout << "\nEnter the WIDTH of package in inches: ";
    cin >> width;
    cout << "\nEnter the HEIGHT of package in inches: ";
    cin >> height;

    if(length <= 10 && width <= 10 && height <= 10){
        volume = (length*width*height);
        cout << "Total Volume of your package is: " << volume;
        if (volume > 100.00 && volume < 500){
            cout << "Your total volume is more than 500. Hence 25% surcharge." <<endl;
            cost = (mini + (mini*0.1));
            cout << "Your total is: " << cost << endl;
        } else if (volume > 500) {
            cost = (mini + (mini*0.25));
            cout << "Your total volume is more than 500. Hence 25% surcharge." <<endl;
            cout << "Your total is: " << cost << endl;
        } else {
            cost = mini;
            cout << "your total volume is less than 100." << endl;
            cout << "Your total is: " << cost << endl;
        }
    } else {
        cout << "Your entered dimensions are more than the maximum allowed!!";
    }
}