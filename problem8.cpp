#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    try {
        if (n%2 != 0) {
            throw "Odd";
        }
        cout << "Even"<< endl;
    }
    catch (const char* a){
        cout<<a<<endl;
    }
    return 0;
}