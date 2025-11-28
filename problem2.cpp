#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int index;

    cout << "Enter index (0-4): ";
    cin >> index;

    try {
        if (index < 0 || index > 4) {
            throw "Index out of range!";
        }
        cout << "Element: " << arr[index] << endl;
    }
    catch (const char* msg) {
        cout << "Error: " << msg << endl;
    }

    return 0;
}