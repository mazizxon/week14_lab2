#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    cin >> num1 >> num2;
    try{
        if (num2 == 0) {
            throw "Division by zero!";
        }
        cout<<"Division is" <<1.0*num1/num2<<endl;
    }
    catch(const char * msg) {
        cout<<msg<<endl;
    }
    return 0;
}