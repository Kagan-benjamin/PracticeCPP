#include <iostream>

using namespace std;

void func_a();
void func_b();
void func_c();


int main() {
    cout << "Starting main()" << endl;
    try {
        func_a();
    }
    catch (int &ex) {
        cout << "Caught ERROR in main" << endl;
    }
    cout << "Finishing main()" << endl;
    return 0;
}


void func_a() {
    cout << "Starting func_a" << endl;
    func_b();
    cout << "Ending func_a" << endl;
}

void func_b() {
    cout << "Starting func_b" << endl;
    try {
    func_c();                      // exception handling prevents
    }                           // early end of func_b execution
    catch(int &ex) {
        cout << "---Error Caught---" << endl;
    }
    cout << "Ending func_b" << endl;
}

void func_c() {
    cout << "Starting func_c" << endl;
    throw 100;
    cout << "Ending func_c" << endl;    // since no exception handling 
}                              // within func_c scope, leaves stack early