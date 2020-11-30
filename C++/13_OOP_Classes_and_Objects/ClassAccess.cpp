#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player{
public:
    // attributes
    string name {"Player"};
    int health {100};
    int xp {3};
    
    // methods
    void talk(string text){cout << name << " says " << text << endl;};
    bool is_dead();
};

class Account{
public:
    // attributes
    string name {"Account"};
    double balance {0.0};
    
    // methods
    bool deposit(double amount){balance += amount;};
    bool withdraw(double amount){balance -= amount;};
};


int main() {
    Player ben;
    Player hero;
    Player players[] {ben, hero};
    vector<Player> players_vec {ben};
    players_vec.push_back(hero);
    
    Account ben_account;
    ben_account.name = "Ben's Account";
    ben_account.balance = 5000.0;
    
    
    
    Account jim_account;
    
    
    Player *enemy = new Player;
    (*enemy).name = "Enemy";
    enemy -> health = 100;
    enemy -> xp = 15;
    
    ben.name = "Ben";      
    ben.health = 100;
    ben.xp = 12;
    
    cout << "Your name is: " << ben.name << endl;
    cout << "Your health is: " << ben.health << endl;
    cout << "Your xp is: " << ben.xp << endl;
    cout << "------------------------------------------------------" << endl;
    ben.talk("Hi there, 420");
    
    cout << "------------------------------------------------------" << endl;
    cout << "What name would you like? ";
    getline(cin, ben.name);
    cout << "You changed your name to " << ben.name << endl;
    
    cout << "------------------------------------------------------" << endl;
    enemy -> talk("I will destroy you!");
    
    cout << "------------------------------------------------------" << endl;
    cout << "The name of ben_account is: " << ben_account.name << " with balance: " << ben_account.balance << endl;
    ben_account.deposit(275.0);
    cout << "After depositing 275$, the balance of ben_account is: " << ben_account.balance << endl;
    ben_account.withdraw(750);
    cout << "After withdrawing 750$, the balance of ben_account is: " << ben_account.balance << endl;
    
    
    delete enemy;
    return 0;
}

/*              Creating and Accessing Object Instances:

#include "Dog.h"

Dog test_dog() {

        // With a pointer  

    // Dog *spot = new Dog;
    // (*spot).name = "Spot";
    // spot -> age = 5;

        // With a direct object 
    Dog spot;
    spot.name = "Spot";
    spot.age = 5;

//---- DO NOT CHANGE THE CODE BELOW----

        // With a pointer          
  // return *spot;

        // With a direct object    
    return spot;
}

*/