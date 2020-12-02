#include <iostream>
#include <string>

using namespace std;


class Player{
private:
    std::string name;
    int health;
    int xp;
public:
    std::string get_name() { return name; }
    int get_health() { return health; }
    int get_xp() { return xp; }
    Player(std::string name_val = "None", 
           int health_val = 0,    
           int xp_val = 0);
    // COPY CONSTRUCTOR
    Player(const Player &source);
    // DESTRUCTOR
    ~Player(){ cout << "Destructor called for: " << name << endl; }
};

Player::Player(string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val} {
        cout << "Constructor called for: " << name_val << endl;
}

Player::Player(const Player &source)
//    : name{source.name}, health{source.health}, xp{source.xp} {
    : Player {source.name, source.health, source.xp}{  // delegation  
    cout << "Copy constructor made copy of: " << source.name << endl;
}

void display_player(Player p){
    cout << "Name: " << p.get_name() << endl;
    cout << "Health: " << p.get_health() << endl;
    cout << "XP: " << p.get_xp() << endl;
}


int main() {
	Player empty;
    Player my_new_obj {empty};
    display_player(empty);
    Player ben{"Ben"};
    Player hero{"Hero",85};
    Player villain{"Villain",100,75};
    
    return 0;
}