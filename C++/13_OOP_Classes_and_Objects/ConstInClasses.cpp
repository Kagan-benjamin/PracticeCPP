#include <iostream>
#include <string>

using namespace std;

class Player{
private:
    string name;
    int health;
    int xp;
public:
    // class methods
    string get_name() const {return name;}  // *******
    void set_name(string name_val) {name = name_val;}
    // overloaded constructors
    Player();
    Player(string name_val);
    Player(string name_val, int health_val, int xp_val);
};

Player::Player()
    : Player{"None",0,0}{
}

Player::Player(string name_val)
    : Player{name_val,0,0}{
}

Player::Player(string name_val, int health_val, int xp_val)
    : name{name_val},health{health_val},xp{xp_val}{
}

void display_player_name(const Player &p){
    cout << p.get_name() << endl;
}


int main(){
    const Player villain {"Villain",100,55};
    Player hero {"Hero",150,15};
    
//  villain.set_name("Super Villain"); error

    cout << villain.get_name() << endl; // works once method
                             // is defined to accept const
    cout << hero.get_name() << endl;
    display_player_name(villain);
    display_player_name(hero);

    cout << endl;
    return 0;
}