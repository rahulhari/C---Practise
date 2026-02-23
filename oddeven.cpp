#include <iostream>
using namespace std;

int main() {
    int num;
    
    cout << "Enter an integer: ";
    cin >> num;
    
    if (num == 0) {
        cout << "Neither" << endl;
    } else if (num % 2 == 0) {
        cout << "Even" << endl;
    } else {
        cout << "Odd" << endl;
    }
    
    return 0;
}