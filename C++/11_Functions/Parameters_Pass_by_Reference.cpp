#include <iostream>
#include <string>
#include <vector>
using namespace std;

void swap(int a, int b);
void swap_ref(int &a, int &b);


int main() {
	int num1{3}, num2{5};
    cout << "Before using swap (no reference) the values are: " << num1 << " and " << num2 << endl;
    swap(num1, num2);
    cout << "After using swap (no reference) the values are: " << num1 << " and " << num2 << endl;
    cout << "------------------------------------------------------------------" << endl;
    cout << "Before using swap (with reference) the values are: " << num1 << " and " << num2 << endl;
    swap_ref(num1, num2);
    cout << "After using swap (with reference) the values are: " << num1 << " and " << num2 << endl;
    return 0;
}


void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

void swap_ref(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}