#include <iostream>
#include <string>

using namespace std;

class Player{
private:
    string name;
    int health;
    int xp;
public:
    void set_name(string name_val){
        name = name_val;
    }
    string get_name(){
        return name;
    }
    int get_health(){
        return health;
    }
    int get_xp(){
        return xp;
    }
    Player(){
        name = "None";   // user-defined no-args
        health = 100;    // constructor 
        xp = 3;
    }
    Player(string name_val, int health_val, int xp_val){
        name = name_val;
        health = health_val; // user-defined 
        xp = xp_val;     // constructor, 3 args
    }

};


int main() {
    Player ben;
    ben.set_name("Ben");
    cout << ben.get_name() << endl;
    cout << "Health: " << ben.get_health() << " | " << "XP: " << ben.get_xp() << endl;
    
    Player frank{"Frank",175,34};
    cout << frank.get_name() << endl;
    cout << "Health: " << frank.get_health() << " | " << "XP: " << frank.get_xp() << endl;
    return 0;
}