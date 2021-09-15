#include <iostream>

using namespace std;

class Main_Class_1{

    public:
        void func_class_1(){
            cout << "das ist function class 1";
        }
};

class Main_Class_2{

    public:
        void func_class_2(){
            cout << endl << "das ist function class 2";
        }
};

class Route_Class: public Main_Class_1, public Main_Class_2{
    //isi fungsi kosong aja, karena ini class untuk pemanggils
};

int main(){
    Route_Class rout_obj;

    // mari kita panggil hasil akhir dari fungsi yang berada didalam class
    rout_obj.func_class_1();
    rout_obj.func_class_2();
}