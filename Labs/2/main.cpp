#include <iostream>

using namespace std;

int main(){

    while (true) {
        
        string value;

        cout << "enter your value = ";
        cin >> value;
        
        if (value == "exit"){
            break;
        }

        cout << value << "\n";
    }

}