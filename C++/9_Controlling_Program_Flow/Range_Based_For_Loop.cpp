#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    
//    int scores[] {10, 20, 30}; // Basic range-based loop
//    for (auto score : scores){
//        cout << score << endl;
//    }
//    cout << endl;
    
//    vector<double> temps {87.9, 77.9, 80.0, 72.5};
//    double avg_temp{};
//    double total{};            // Vector range-based loop
//    for (auto temp : temps){   // Sets precision for output
//        total += temp;
//    }
//    if (temps.size() != 0){
//        avg_temp = total / temps.size();
//    }
//    cout << fixed << setprecision(1);
//    cout << "The average temperature is: " << avg_temp << endl;

//    for (auto val : {1,2,3,4,5}){
//        cout << val << endl;      // Collection directly inputted 
//    }

    for (auto c : "This is a test."){  // Loop with Strings/Characters
        if (c != ' '){
            cout << c;
        } else {
            cout << "\t";
        }
    }
    
    cout << endl;
    return 0;
}