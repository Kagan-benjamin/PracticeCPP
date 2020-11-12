#include <iostream>
using namespace std;

int main() {
    int num{};
    bool toggle{false};
    cout << "Enter a positive integer - start the countdown: ";
    cin >> num;
    
    while (num > 0){
        cout << num << endl;
        if (num == 1){
            toggle = true;
        }
        num--;
    }
    if (toggle){
        cout << "Blastoff!" << endl;
    } 
    else {
        cout << "Not a valid selection" << endl;
    }
    cout << "-----------------------------------------------------" << endl;
    
    int num1{};
    cout << "Enter a positive integer to count up to: ";
    cin >> num1;
    
    int i{1};
    while (num1 >= i){
        cout << i << endl;
        i++;
    }
    cout << "-----------------------------------------------------" << endl;
    
    int num2{};
    cout << "Enter an integer less than 100: ";
    cin >> num2;
    
    while (num2 >= 100) {
        cout << "Enter an integer less than 100: ";
        cin >> num2;
    }
    cout << "Thanks" << endl;
    
    
    
    cout << endl;
    return 0;
}

/*    While Loop Exercise

#include <iostream>
#include <vector>
using namespace std;

int count_numbers(const vector<int> &vec) {
    //---- WRITE YOUR CODE BELOW THIS LINE----
    int count{}, i{}; 
    while (i < vec.size() && vec.at(i) != -99){      Make sure to check size first!
        count++;
        i++;
    } 
    //---- WRITE YOUR CODE ABOVE THIS LINE----
    //---- DO NOT MODIFY THE CODE BELOW THIS LINE-----
    return count;
}

*/