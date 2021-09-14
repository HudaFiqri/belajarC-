#include <iostream>

using namespace std;

int main(){

    //masukkan value yang akan di looping
    int value = 1;

    // berbeda dengan while biasa, do while akan me-looping berdasarkan array, misalnya valuenya adalah 1 dan nilai loopingnya ada 5
    // maka 1 akan di baca sebagai 0
    do{
        cout << value << "\n";
        value++;
    } while ( value < 5 );
}