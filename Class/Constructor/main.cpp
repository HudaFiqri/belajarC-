#include <iostream>

using namespace std;

class player{
    public:
        string val_name;
        int val_hp;
        int val_mana;

        player(string pla_name, int pla_hp, int pla_mana){
            val_name = pla_name;
            val_hp = pla_hp;
            val_mana = pla_mana;
        }

};

int main(){

    string name;
    int HP_value, Mana_value;

    cout << "enter player name = ";
    cin >> name;

    cout << "enter HP player = ";
    cin >> HP_value;

    cout << "enter Mana player = ";
    cin >> Mana_value;

    player pla_obj(name, HP_value, Mana_value);
    
    cout << endl << "player name = " << pla_obj.val_name << endl;
    cout << "player HP = " << pla_obj.val_hp << endl;
    cout << "player Mana = " << pla_obj.val_mana << endl;
}