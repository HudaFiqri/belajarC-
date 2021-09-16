#include <iostream>

using namespace std;

class Main_Class_1{

    void func1( string str1, string str2){
        string str3 = str1 + str2;
        cout << str3;
    }

};

int main(){

    Main_Class_1 class_Obj;

    class_Obj.func1("hello ", "world");

}
