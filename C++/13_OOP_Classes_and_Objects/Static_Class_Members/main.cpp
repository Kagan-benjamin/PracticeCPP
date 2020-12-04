#include <iostream>
#include "Player.h"

using namespace std;

void display_active_players(){
    cout << "Active Players: " << Player::get_total_players() << endl;
}

int main() {
	display_active_players();
    Player ben {"Ben"};
    display_active_players();
    Player frank {"Frank", 100, 55};
    display_active_players();
    {
        Player test1;
        Player test2;
        Player *test3{nullptr};
        test3 = new Player; 
        display_active_players();
        delete test3;
    }
    display_active_players();
    
    Player *enemy = new Player{"Enemy",100,100};
    display_active_players();
    delete enemy;
    display_active_players();
    
    cout << endl;
    return 0;
}