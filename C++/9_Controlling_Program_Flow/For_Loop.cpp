#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    cout << "----Loop up, increment by 1----------------------" << endl;
    for (int i{1}; i <= 10; i++){
        cout << i << endl;
    }
    cout << "----Loop up, increment by 2----------------------" << endl;
    for (int i{1}; i <= 10; i += 2){
        cout << i << endl;
    }
    cout << "----Loop down, decrement by 1----------------------" << endl;
    for (int i{10}; i > 0; i--){
        cout << i << endl;
    }
    
//    for (int i{10}; i <= 100; i += 10){
//        if(i % 15 == 0){
//            cout << i << endl;
//        }
//    }

//    for (int i{1},j{5}; i <= 5; i++, j++){
//        cout << i << " + " << j << " = " << (i+j) << endl;
//    }

    for (int i{1}; i <= 100; i++){
        cout << i;
        if (i % 10 == 0){
            cout << endl;
        } 
        else {
            cout << " ";
        }
    }
    cout << endl;
//    for (int i{1}; i <= 100; i++){
//        cout << i << ((i % 10 == 0) ? "\n" : " ";
//    }
    
    vector <int> nums {10,20,30,40,50};
    for (unsigned int i{0}; i < nums.size(); i++){
        cout << nums[i] << endl;
    }

    return 0;
}