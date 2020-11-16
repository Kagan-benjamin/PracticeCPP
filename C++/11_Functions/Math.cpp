#include <iostream>
#include <cmath> // required for std library math functions
#include <cstdlib> // required for rand()
#include <ctime> // required for time()
using namespace std;

int main() {

    double num{};
    
    cout << "Please enter a number (double): ";
    cin >> num;
    
    cout << "The sqrt of " << num << " is: " << sqrt(num) << endl;
    cout << "The cubed root of " << num << " is: " << cbrt(num) << endl;
    cout << "The sine of " << num << " is: " << sin(num) << endl;
    cout << "The cos of " << num << " is: " << cos(num) << endl;
    cout << "The ceil of " << num << " is: " << ceil(num) << endl;
    cout << "The floor of " << num << " is: " << floor(num) << endl;
    cout << "The round of " << num << " is: " << round(num) << endl;
    
    double power{};
    cout << "\nEnter a power to raise " << num << " to: ";
    cin >> power;
    cout << num << " raised to the " << power << " power is: " << pow(num, power) << endl;
    
// Random Numbers
    int random_number{};
    size_t count {10};  // # of random numbers to generate
    int min{1};         // lower bound (inclusive)
    int max{6};         // upper bound (inclusive)
    
    // seed the random number generator
    // If you don't seed the generator, you will get back the same
    // sequence of random numbers every run
    cout << "----------------Random Numbers------------------------" << endl;
    cout << "RAND_MAX on my system is: " << RAND_MAX << endl;
    srand(time(nullptr));  // SEEDING FOR GENERATOR
    
    for (size_t i{1}; i <= count; i++){
        random_number = rand() % max + min;
        cout << random_number << endl;
    }
    
    // Math Exercise, rounding:
//    double bill_total {102.78};
//    int number_of_guests {5};
//    
//    //----WRITE YOUR CODE BELOW THIS LINE----
//    double individual_bill {(bill_total / number_of_guests)};
//    double individual_bill_1 {floor(individual_bill)};
//    double individual_bill_2 {round(individual_bill)};
//    double individual_bill_3 {(ceil(individual_bill*100) / 100)};
//    //----WRITE YOUR CODE ABOVE THIS LINE----
//    cout << "The individual bill at location 1 will be $" << individual_bill_1 << "\n" << "The individual bill at location 2 will be $" << individual_bill_2 << "\n" << "The individual bill at location 3 will be $" << individual_bill_3;
    
    cout << endl;
    return 0;
}