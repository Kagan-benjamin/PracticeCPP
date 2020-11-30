#include <iostream>
#include <string>

using namespace std;

class Player{
private:
    string name;
    int health;
    int xp;
public:
    void set_name(string text){
        name = text;
        cout << "set_name called with Player, name is: " << name << endl;
    }
    void get_name(){
        cout << name << endl;
    }
    // Overloaded Constructors
    Player(){
        cout << "No args constructor called for Player" << endl;
    }
    Player(string name){
        cout << "String arg constructor called for Player" << endl;
        name = name;
    }
    Player(string name, int health, int xp){
        cout << "Three args constructor called for Player" << endl;
        name = name;
        health = health;
        xp = xp;
    }
    ~Player(){
        cout << "Destructor called for: " << name << endl;
    }
};


int main() {
	
    {
    Player slayer;
    slayer.set_name("Slayer");
    }
    
    {
    Player ben;
    ben.set_name("Ben");
    Player hero("Hero");
    hero.set_name("Hero");
    Player villain("Villain",100,12);
    villain.set_name("Villain");
    }
    
    Player *enemy = new Player;
    enemy -> set_name("Enemy");
    
    Player *level_boss = new Player("Level Boss",1000,300);
    level_boss -> set_name("Level Boss");
    
    delete enemy;
    delete level_boss;
    
    cout << endl;
    return 0;
}