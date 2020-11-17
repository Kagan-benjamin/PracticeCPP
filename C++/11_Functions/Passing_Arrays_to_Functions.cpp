#include <iostream>
#include <string>
using namespace std;

void print_array(const int arr[], size_t size);
void set_array(int arr[], size_t size);


int main() {
	int arr[] {1,2,3,4,5};
    print_array(arr, 5);
    set_array(arr, 5);
    print_array(arr, 5);
    
    cout << endl;
    return 0;
}


void print_array(const int arr[], size_t size){
    for (size_t i{0}; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void set_array(int arr[], size_t size){
    int user_input{};
    for (size_t i{0}; i < size; i++){
        cout << "Please enter an integer: ";
        cin >> user_input;
        arr[i] = user_input;
    }
}