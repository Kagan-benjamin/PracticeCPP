#include <iostream>
using namespace std;

main(){
    int num {};
    const int target {10};

    cout << "Please enter a number: ";
    cin >> num;

    if (num < target){
        cout << num << " is less than " << target;  
    } 
    else if (num > target){
        cout << num << " is greater than " << target;
    }
    else {
        cout << num << " is equal to " << target;
    }
    return 0;
}