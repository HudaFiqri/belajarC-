#include <iostream>

using namespace std;

int main(){
    
    //value int
    int value;

    cout << "enter your value max 5 = ";
    cin >> value;

    switch (value)
    {
        case 1:
        cout << "value 1";
        break;

        case 2:
        cout << "value 2";
        break;

        case 3:
        cout << "value 3";
        break;

        case 4:
        cout << "value 4";
        break;

        case 5:
        cout << "value 5";
        break;
    }
}