#include <iostream>

using namespace std;

int main(){
    int value1, value2, value3;

    value1 = 5;
    value2 = 10;
    value3 = (value1 += value2);

    cout << value3 << endl;

}