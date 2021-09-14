#include <iostream>

using namespace std;

class cla1{
    public:
    // masukkan parameter yang nantinya akan di buat object
    int int_val_1, int_val_2;
    string str_val_1, str_val_2; 
};

int main(){

    // definisikan klasse
    cla1 cla_obj;

    // membuat objekt dan memanggil isi dari class
    // integer class
    cla_obj.int_val_1 = 10;
    cla_obj.int_val_2 = 20;

    //string klasse
    cla_obj.str_val_1 = "hello world";
    cla_obj.str_val_2 = "hello world 2";


    // sekarang tinggal panggil objekt yang sudah dibuat
    cout << cla_obj.int_val_1 << endl;
    cout << cla_obj.int_val_2 << endl;

    cout << cla_obj.str_val_1 << endl;
    cout << cla_obj.str_val_2 << endl;

}