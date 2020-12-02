#include <iostream>
#include <string>

using namespace std;


class Player{
private:
    std::string name;
    int health;
    int xp;
public:
    Player(std::string name_val = "None", 
           int health_val = 0,    // default parameters 
           int xp_val = 0);
};

//Player::Player()             // delegating constructor
//    : Player{"None", 0, 0} {
//        cout << "No-args Constructor" << endl;
//}
//
//Player::Player(std::string name_val) // delegating constructor
//    : Player{name_val, 0, 0} {
//        cout << "1-arg Constructor" << endl;
//}
//
//Player::Player(std::string name_val, int health_val, int xp_val)
//    : name{name_val}, health{health_val}, xp{xp_val} {
//        cout << "3-arg Constructor" << endl;
//}

Player::Player(string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val} {
}


int main() {
	Player empty;
    Player ben{"Ben"};
    Player hero{"Hero",85};
    Player villain{"Villain",100,75};
    
    return 0;
}