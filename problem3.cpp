#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    try {
        if (n<0) {
            throw "Negative values are not allowed!";
        }
        cout<<n*n<<endl;
    }
    catch (const char* err){
        cout<<err<<endl;
    }
    return 0;
}