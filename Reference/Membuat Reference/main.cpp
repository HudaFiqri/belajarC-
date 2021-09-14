#include <iostream>

using namespace std;

int main(){
    
    string value1 = "banana";
    // ketika value1 dipanggil di variable value2 maka value1 akan disimpan di memory dan akan keluarkan sebagai string
    string &value2 = value1;

    cout << value2 << endl;
}