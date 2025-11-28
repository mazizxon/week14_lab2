#include <iostream>
using namespace std;

void throwException() {
    throw "Exception thrown!";
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