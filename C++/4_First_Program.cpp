#include <iostream> // needs to access input/output libraries 

int main(){
    int fav_num;          // declares integer variable 'fav_num'
    std::cout << "Please enter your favorite number between 1 and 100: ";
    std::cin >> fav_num;
    std::cout << "Amazing! That's my favorite number too!" << std::endl;
    return 0;
}

// cout - console out
// cin - console in
// << - injection operator, used w/ values and console
// >> - extraction operator, pulls values from console
// endl - flushes buffers and sends cursor to next line
// return 0 - signals standard end to C++ program