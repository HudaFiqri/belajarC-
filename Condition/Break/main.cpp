#include <iostream>

using namespace std;

int main(){
    
    for(int value = 0; value < 10; value++){
        if(value == 5){
            // jadi fungsi break disini adalah ketika array mencapai 5 maka akan diberhentikan
            // dan output yang akan dikeluarkan adalah 4
            break;
        }
        cout << value << "\n";
    }

}