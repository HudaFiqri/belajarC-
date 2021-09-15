#include <iostream>

using namespace std;

class cls{
    private:
    //private attribute
    string str_prv;

    //setter
    public:
    void func_cls(string func_values){
        str_prv = func_values;
    }

    //getter
    string get_values(){
        return str_prv;
    }
    
};

int main(){
    cls cls_obj;

    // definisikan fungsi dari class
    cls_obj.func_cls("hello world");

    // panggil value dari class
    cout << cls_obj.get_values();

}