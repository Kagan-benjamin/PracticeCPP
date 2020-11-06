#include <iostream>
using namespace std;

int main() {
	
    cout << "Hello, please enter 3 integers: ";
    int num1 {}, num2 {}, num3 {};
    cin >> num1 >> num2 >> num3;
    
    int sum = num1 + num2 + num3;
    const int total_num {3};
    double average {0.0};
    average = static_cast<double>(sum) / total_num;
//  average = (double)sum / total_num;  // Old Style 
    
    cout << "\n-----------------------------------------------" << endl;
    cout << "Num1 = " << num1 << ", Num2 = " << num2 << ", Num3 = " << num3 << endl;
    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;
    return 0;
}