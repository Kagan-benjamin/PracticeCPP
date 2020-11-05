#include <iostream>

using namespace std;

int main() {
    
    cout << "What is the width of your room? ";
    int width {0};
    cin >> width;

    cout << "What is the length of your room? ";
    int length {0};
    cin >> length;
    
    cout << "The area of your room is " << width * length << " ft^2" << endl;
    
    return 0;
}
