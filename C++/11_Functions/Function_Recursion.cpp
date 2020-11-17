#include <iostream>
using namespace std;

unsigned long long fib(unsigned long long n);

int main(){
    cout << "Fib(0): " << fib(0) << endl;
    cout << "Fib(1): " << fib(1) << endl;
    cout << "Fib(2): " << fib(2) << endl;
    cout << "Fib(3): " << fib(3) << endl;
    cout << "Fib(10): " << fib(10) << endl;

    cout << endl;
    return 0;
}


unsigned long long fib(unsigned long long n){
    if (n == 0){
        return 0;
    }
    else if (n == 1){
        return 1;
    }
    else {
        return (fib(n-1) + fib(n-2));
    }
}


/*  Recursion Exercise:

#include <iostream>
#include <iomanip>
using namespace std;

int function_activation_count {0};

double a_penny_doubled_everyday(int days, double value = 0.01);


void amount_accumulated() {
    
    double total_amount {a_penny_doubled_everyday(25)};

    cout <<  "If I start with a penny and doubled it every day for 25 days, I will have $" << setprecision(10) << total_amount;
}


double a_penny_doubled_everyday(int days, double value) {
    function_activation_count++;
    if (days == 1){
        return value;
    }
    else {
        days--;
        value *= 2;
        return a_penny_doubled_everyday(days, value);
    }
}

int test_function_activation_count() {
    return function_activation_count;
}

*/