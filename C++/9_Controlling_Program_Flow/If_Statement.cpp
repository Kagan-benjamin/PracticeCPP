#include <iostream>
using namespace std;

int main() {
	int num {};
    const int min {10};
    const int max {100};
    
    cout << "Please enter a number between " << min << " and " << max << ": ";
    cin >> num;
    if (num >= min && num <= max){
        cout << num << " is within the range." << endl;
    }
    if (num < min || num > max){
        cout << num << " is not within the valid range." << endl;
    }
    if (num >= min){
        int diff {num - min};
        cout << num << " is greater than or equal to " << min << " by " << diff << endl; 
    } else {
        cout << num << " is not valid since it is less than " << min << endl;
    }
    if (num <= max){
        int diff {max - num};
        cout << num << " is less than or equal to " << max << " by " << diff << endl;
    } else {
        cout << num << " is not valid since it is less than " << max << endl;
    }
    return 0;
}
