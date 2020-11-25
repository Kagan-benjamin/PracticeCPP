/*       Section 12 Challenge:
 * Write a C++ function named apply_all that expects two arrays of 
 * integers and their sizes, and dynamically allocates a new array 
 * of integers whose size is the product of the 2 input array sizes.
 * 
 * The function should loop through the second input array and 
 * multiply each element across each element of array1. Store the 
 * product in the newly created array.
 * 
 * The function should return a pointer to the newly allocated array.
 * 
 * You can also write a print function that expects a pointer to an
 * array of integers and its size, and displays the elements in the
 * underlying input array.
 * 
 * */
 
#include <iostream>
using namespace std;

void print(const int *array, size_t size);
int *apply_all(const int *const array1, size_t array1_size, const int *const array2, size_t array2_size);


int main() {
    const size_t array1_size{5};
    const size_t array2_size{3};
    int array1[] {1,2,3,4,5};
    int array2[] {10,20,30};
    
    cout << "Array 1: ";
    print(array1, array1_size);
    cout << "---------------------------------------";


    cout << "\nArray 2: ";
    print(array2, array2_size);
    cout << "---------------------------------------";

    int *results = apply_all(array1, array1_size, array2, array2_size);
    constexpr size_t results_size{array1_size * array2_size};
    
    cout << "\nResult: ";
    print(results, results_size);
    
    delete [] results;
    cout << endl << endl;
    return 0;
}


void print(const int *const array, size_t size){
    cout << "[ ";
    for (size_t i{0}; i < size; i++){
        cout << array[i] << " ";
    }
      cout << "]" << endl;
} 

int *apply_all(const int *const array1, size_t array1_size, const int *const array2, size_t array2_size){
    int *new_array{nullptr};
    new_array = new int[array1_size * array2_size];
    size_t new_array_idx{0};
    
    for (size_t i{0}; i < array2_size; i++){
        for (size_t j{0}; j < array1_size; j++){
            new_array[new_array_idx] = (array2[i] * array1[j]);
            new_array_idx++;
        }
    }
    return new_array;
}