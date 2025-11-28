#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    try {
        if (n == 0) {
            throw 0;
        }
        if (n<0) {
            throw "Negative number";
        }
        cout << "Valid"<< endl;
    }
    catch (int){
        cout<<"Error: zero"<<endl;
    }
    catch (const char * msg) {
        cout<<"Error: "<<msg<<endl;
    }
    return 0;
}
