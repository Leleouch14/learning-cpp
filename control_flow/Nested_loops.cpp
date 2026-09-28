#include <iostream>
#include <vector>
using namespace std;

int main() {
    int num_items{};

    cout << "how many items do you want to enter? ";
    cin >> num_items;

    vector<int> data{};

    for(int i(1); i <= num_items; ++i) {
        int j{};
        cout << "Enter the entry number " << i << " : ";
        cin >> j;
        data.push_back(j); //This is how you fcking add smt to a vector ffs.
    }

    for(auto val: data){ //This is how we output values from a vector
        cout << val << endl;
    }
    cout << "displaying histogram!!" << endl;
    for(auto val: data){
        for(int i{1}; i <= val; i++)
            if(i % 5 == 0 && i != 0)
                cout << "*";
            else 
                cout << "-";
        cout << endl;
    }
    return 0;
}