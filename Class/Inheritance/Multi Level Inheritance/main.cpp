#include <iostream>

using namespace std;

// das parent   
class Main_Class_1{
    public:
        void func_class_1() {
            cout << "das is it funktion an klasses 1";
        }
};

// das child
// nah coba untuk memanggil class di dalam class
class Main_Class_2: public Main_Class_1{
    public:
        void func_class_2() {
            //hasilnya fungsi ini akan mengeluarkan output
            cout << endl << "das is it funktion an klasses 2";  
        }  
};

// dan grandChild
class Main_Class_3: public Main_Class_2{
    //disini fungsi kosong
};

int main(){

    // oke mari kita panggil class Main_Class_3 dan buat objekt-nya dan apa yang akan terjadi???
    Main_Class_3 class_Obj;

    // memanggil fungsi yang berada di class Main_Class_1
    class_Obj.func_class_1();

    // dan memanggil fungsi yang berada di class Main_Class_2 melalui class Main_Class_3
    class_Obj.func_class_2();
}