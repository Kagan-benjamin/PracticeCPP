#include <iostream>

using namespace std;

int *create_array(size_t size, int initial_val = 0);
void display(size_t size, const int *const array);

int main() {
    
    size_t size{};
    int val{};
    int *my_array{nullptr};
    
    cout << "\nHow many integers would you like to allocate? ";
    cin >> size;
    cout << "What value would you like them initialized to? ";
    cin >> val;
    
    my_array = create_array(size,val);    // This preserves the new_storage pointer
    cout << "my_array val is: " << my_array << endl;
    cout << "*my_array val is: " << *my_array << endl;
    
    cout << "-----------------------------------------" << endl;
    display(size,my_array);
    delete [] my_array;
    
    
    cout << endl;
    return 0;
}


int *create_array(size_t size, int initial_val){
    int *new_storage{nullptr};
    new_storage = new int[size];
    for (size_t i{0}; i < size; i++){
        new_storage[i] = initial_val;
    }
    return new_storage;
}

void display(size_t size, const int *const array){
    for (size_t i{0}; i < size; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}