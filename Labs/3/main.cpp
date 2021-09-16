#include <iostream>

using namespace std;

class Calculator{

    public:

        void tambah( int value1, int value2){
            int value3 = value1 + value2;
            cout << "your output is = " << value3 << endl;
        }

        void kurang( int value1, int value2){
            int value3 = value1 - value2;
            cout << "your output is = " << value3 << endl;
        }

        void kali( int value1, int value2 ){
            int value3 = value1 * value2;
            cout << "your output is = " << value3 << endl;
        }

        void bagi( int value1, int value2 ){
            int value3 = value1 / value2;
            cout << "your output is = " << value3 << endl;
        }

};

int main(){
    Calculator calc_obj;

    calc_obj.bagi(10, 2);
}