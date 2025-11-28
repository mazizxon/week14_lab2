#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file;

    try {
        file.open("data.txt");
        if (!file) {
            throw "File not found";
        }

        int num;
        file >> num;
        cout << "First integer: " << num << endl;

        file.close();
    }
    catch (const char* msg) {
        cout << "Error: " << msg << endl;
    }

    return 0;
}