#include <iostream>
using namespace std;

int main() {
    bool equal_result {false};
    bool not_equal_result {false};
    int num1 {}, num2 {};
    cout << boolalpha; // outputs True/False rather than 1/0

    cout << "Enter two integers separated by a space: ";
    cin >> num1 >> num2;
    equal_result = (num1 == num2);
    not_equal_result = (num1 != num2);
    cout << "Comparison result is equal to: " << equal_result << endl;
    cout << "Comparison result is NOT equal to: " << not_equal_result << endl;

    // Note that == will NOT distinguish .000001 difference,
    // 10.0 == 9.9999999999 will evaluate to True!
    // use outside libraries to handle number precision
    return 0;
}
