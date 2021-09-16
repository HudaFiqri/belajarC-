#include <iostream>

using namespace std;

int main(){
    try{
        
        string var = "hello";

        if (var >= "world"){
            cout << "your code is daijobou";
        } else {
            throw 404;
        }

    } catch (...) {
        cout << "your code is not daijobou" << endl;
    }
}