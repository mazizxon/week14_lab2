#include <iostream>
using namespace std;

void throwException() {
    throw "Error!";
}

int main() {
    try {
        throwException();
    }
    catch (const char* msg) {
        cout << "Caught in main" << endl;
    }

    return 0;
}