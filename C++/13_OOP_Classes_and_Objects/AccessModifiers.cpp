#include <iostream>
#include <string>

using namespace std;

class Player{
private:
    string name {"Player"};
    int health {100};
    int xp {3};
public:
    void talk(string text){cout << name << " says " << text << endl;};
    void set_name(){name = "Ben";};
    bool is_dead();
};


int main() {
    Player ben;
    ben.set_name();
//    ben.name = "Ben";  OR cout << ben.name << endl;   Private
    ben.talk("Hello there");
    
    
    cout << endl;
    return 0;
}