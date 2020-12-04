#ifndef _PLAYER_H_
#define _PLAYER_H_
#include <string>

class Player{
private:
    static int total_players;
    std::string name;
    int health;
    int xp;
public:
    // member methods
    std::string get_name() const {return name;}
    int get_health() const {return health;}
    int get_xp() const {return xp;}
    // class methods
    static int get_total_players();    
    // constructors
    Player(std::string name_val="None", int health_val=0, int xp_val=0);
    Player(const Player &source);
    ~Player();

};

#endif // _PLAYER_H_