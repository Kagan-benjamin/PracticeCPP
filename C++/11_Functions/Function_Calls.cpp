#include <iostream>
using namespace std;

void func2(int &x, int y, int z);
int func1(int a, int b);

int main() {
    int x{10};
    int y{20};
    int z{};
    z = func1(x,y);
    cout << z << endl;
    
    cout << endl;
    return 0;
}


void func2(int &x, int y, int z){
    x += y + z;
}

int func1(int a, int b){
    int result{};
    result = a + b;
    func2(result, a, b);
    return result;
}


/*       Typical Call Stack Execution:

 * main:
 *  -push space for the return value
 *  -push space for the parameters
 *  -push the return address
 *  -transfer control to func1 (jmp)
 * func1:
 *  -push the address of the previous activation record
 *  -push any register values that will need to be restored before 
 * returning to the caller
 *  -perform the code in func1
 *  -restore the register values
 *  -restore the previous activation record (move the stack pointer)
 *  -store any function result
 *  -transfer control to the return address (jmp)
 * main:
 *  -pop the parameters
 *  -pop the return value

*/