#include <iostream>
using namespace std;

int main() {
    try {
        int num;
        cout << "Enter a number: ";
        cin >> num;

        if (num < 0) {
            throw "Negative!";
        }
        cout << "Positive number" << endl;
    }
    catch (const char* msg) {
        cout << msg << endl;
    }

    cout << "Done" << endl;
    return 0;
}