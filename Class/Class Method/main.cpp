#include <iostream>

using namespace std;

class cla{

    public:
    string str_plc;

    private:
    string str_pvt;

    protected:
    string str_ptc;
};

int main(){

    cla class_obj;

    class_obj.str_plc = "class using public parameter";
    // fungsi yang telah private dan protect tidak dapat dipanggil, jika di run atau di compile akan error
    class_obj.str_pvt = "Private Can't access";
    class_obj.str_ptc = "Protected Can't access";

    cout << class_obj.str_plc << endl;
    // ini juga sama
    cout << class_obj.str_pvt << endl;
    cout << class_obj.str_ptc << endl;

}