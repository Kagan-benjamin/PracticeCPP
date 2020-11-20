#include <iostream>
using namespace std;

int main() {
    int *int_ptr{nullptr};
    int_ptr = new int;
    
    cout << "Memory location of newly allocated int variable on heap: " << int_ptr << endl;
    cout << "Original value at this location: " << *int_ptr << endl;
    delete int_ptr;
    
    cout << "--------------------------------------------------------------" << endl;
    size_t size{0};
    double *temp_ptr{nullptr};
    cout << "How many temperatures? ";
    cin >> size;
    temp_ptr = new double[size];
    cout << "temp_ptr: " << temp_ptr << endl;
    delete [] temp_ptr;
    
    
    cout << endl; 
    return 0;
}