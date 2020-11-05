#include <iostream>
using namespace std;

int main() {
    char vowels[] {'a','e','i','o','u'};
    cout << "\nThe first vowel is: " << vowels[0] << endl; 
    cout << "The last vowel is: " << vowels[4] << endl;
    
//  cin >> vowels[5]; this is out of bounds! will crash
    
    double hi_temps[] {90.1, 89.8, 77.5, 81.6};
    cout << "\nThe first high temperature is: " << hi_temps[0] << endl;
    hi_temps[0] = 100.7;
    cout << "The first high temperature is now: " << hi_temps[0] << endl;

    int test_scores[5]{0};
    cout << "\nThe score at index 0 is: " << test_scores[0] << endl;
    cout << "The score at index 1 is: " << test_scores[1] << endl;
    cout << "The score at index 2 is: " << test_scores[2] << endl;
    cout << "The score at index 3 is: " << test_scores[3] << endl;
    cout << "The score at index 4 is: " << test_scores[4] << endl;
    
    cout << "Please enter 5 test scores: ";
    cin >> test_scores[0];
    cin >> test_scores[1];
    cin >> test_scores[2];
    cin >> test_scores[3];
    cin >> test_scores[4];
    
    cout << "\nThe updated array is:" << endl;
    cout << "The updated score at index 0 is: " << test_scores[0] << endl;
    cout << "The updated score at index 1 is: " << test_scores[1] << endl;
    cout << "The updated score at index 2 is: " << test_scores[2] << endl;
    cout << "The updated score at index 3 is: " << test_scores[3] << endl;
    cout << "The updated score at index 4 is: " << test_scores[4] << endl;    
    
    cout << "\nNotice what the value of the array name is: " << test_scores << endl << endl;
    // The overall array name returns the memory location of element 0 of the array
    return 0;
}
