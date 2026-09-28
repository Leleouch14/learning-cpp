#include <iostream>
#include <vector>
#include <cctype>
using namespace std;

int main() {
    vector<string> menu = {"P - Print Numbers", "A - Add a number", "M - Display the mean of numbers", "S - smallest", "L - Largest", "Q - Quit"};
    vector<int> num = {};
    int num_num{};
    cout << "Enter the number of entries for the list: ";
    cin >> num_num;
    
    for(int i{1}; i <= num_num; ++i){
        int entry{};
        cout << "enter the Number: ";
        cin >> entry;
        num.push_back(entry);
    }

     for(size_t i = 0; i <= num.size(); ++i) {
        cout << num[i] << endl;
    }

    char choice{};
    
    for(size_t i = 0; i <= menu.size(); ++i) {
        cout << menu[i] << endl;
    }
    
    cout << "enter your choice using only the first Letter in CAPS: ";
    cin >> choice;
    
    vector<char> op = {'p', 'a', 'm', 's', 'l', 'q'};
    choice = tolower(choice);
    for(size_t i; i <= op.size(); ++i){
        for(int j; choice == op[j]; ++i)
            cout << op[j];
        
    }

    return 0;
}