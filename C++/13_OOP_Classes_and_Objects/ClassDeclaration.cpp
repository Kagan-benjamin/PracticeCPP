#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player{
    // attributes
    string name {"Player"};
    int health {100};
    int xp {3};
    
    // methods
    void talk(string);
    bool is_dead();
};

class Account{
    // attributes
    string name {"Account"};
    double balance {0.0};
    
    // methods
    bool deposit(double);
    bool withdraw(double);
};


int main() {
    Player ben;
    Player hero;
    Account ben_account;
    Account jim_account;
    
    
    
    Player players[] {ben, hero};
    vector<Player> players_vec {ben};
    players_vec.push_back(hero);
    
    
    Player *enemy{nullptr};
    enemy = new Player;
    
    delete enemy;
    
    return 0;
}