#include <iostream>
using namespace std;

int main() {
    int start{};
    int end{};
    int i{};
    cout << "enter the starting number: ";
    cin >> start;
    cout << "\nenter the ending number: ";
    cin >> end;

    for (i=start; i<=end; i++){
        cout << i << endl;
    }
}