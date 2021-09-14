#include <iostream>

using namespace std;

int main(){
    
    for(int value = 0; value < 10; value++){

        if( value == 5){
            // jadi untuk continue semua value array akan di keluarkan akan tetapi untuk value tertentu yang sudah ditentukan tidak akan di keluarkan
            // contoh disini array awal adalah 0 dan array akhir adalah 10, sedangkan 5 akan di continue maka angka 5 tidak akan di cetak.
            continue;
        }
        cout << value << "\n";
    }

}