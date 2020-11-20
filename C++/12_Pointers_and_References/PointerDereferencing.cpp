#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

    int score{100};
    int *score_ptr{&score};
    
    cout << "Score initialized to: " << score << endl;
    cout << "Dereferenced score_ptr is: " << *score_ptr << endl; 
    *score_ptr = 200;
    cout << "*score_ptr = 200" << endl;
    cout << "Dereferenced score_ptr is: " << *score_ptr << endl;
    cout << "Score is now: " << score << endl;
    
    cout << "\n--------------------------------------------" << endl;
    double high_temp{100.7};
    double low_temp{37.4};
    double *temp_ptr{&high_temp};
    cout << "*temp_ptr: " << *temp_ptr << endl;
    temp_ptr = &low_temp;
    cout << "temp_ptr = &low_temp, so *temp_ptr is: " << *temp_ptr << endl;
    
    cout << "\n--------------------------------------------" << endl;
    string name{"Frank"};
    string *name_ptr{&name};
    cout << "*name_ptr: " << *name_ptr << endl;
    name = "James";
    cout << "name = James, so *name_ptr: " << *name_ptr << endl;
    
    cout << "\n--------------------------------------------" << endl;
    vector<string> stooges{"Larry","Moe","Curly"};
    vector<string> *vector_ptr{nullptr};
    vector_ptr = &stooges;
    cout << "First stooge: " << (*vector_ptr).at(0) << endl;
    cout << "Second stooge: " << (*vector_ptr)[1] << endl;
    cout << "All Stooges: ";
    for (auto stooge : *vector_ptr){
        cout << stooge << " ";
    }
    cout << endl;
    
    cout << endl;
    return 0;
}
