#include <iostream>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp; 
}


int main() {
    
    int a{5};
    while (a > 0){
        cout << a << endl;
        a--;
    }
    
    int x{100}, y{200};
    cout << "\nx: " << x << endl;
    cout << "y: " << y << endl;
    
    swap(&x,&y);
    cout << "------After Swap-----";
    cout << "\nx: " << x << endl;
    cout << "y: " << y << endl;
    
    cout << endl; 
    return 0;
}