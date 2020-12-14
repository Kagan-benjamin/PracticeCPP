/*          Section 14 Challenge - Operator Overloading
 * 
 *  Overload the following operators in the provided Mystring class.
 * 1. Overload the operators using member functions
 * 2. Overload the same operators using non-member functions 
 * 
 * Operator List:
 * -  .unary minus, returns the lowercase version the obj's string
 *      -s1
 * == .returns true if the two strings are equal
 *      (s1 == s2)
 * != .returns true if the two strings are not equal
 *      (s1 != s2)
 * <  .returns true if the lhs string is lexically less than rhs string
 *      (s1 < s2)
 * >  .returns true if the lhs string is lexically greater than rhs string
 *      (s1 > s2)
 * +  .returns an object that concatenates the lhs and rhs
 *      s1 + s2
 * += .concatenate the rhs string to the lhs and store result in lhs obj
 *      s1 += s2;   equivalent to s1 = s1 + s2;
 * *  .results in a string that is copied n times
 *      s2 * 3;   s2 = 'abc', s1 = s2*3, s1 results is "abcabcabc"
 * 
 */

#include <iostream>
#include "Mystring.h"

using namespace std;

int main() {
    cout << boolalpha; 
	Mystring test{"Test"};
    Mystring minus_test = -test;
    Mystring a{"a"};
    Mystring b{"b"};
    test.display();
    minus_test.display();
    cout << "test == test: " << (test == test) << endl;
    cout << "test == minus_test: " << (test == minus_test) << endl;
    cout << "test != test: " << (test != test) << endl;
    cout << "test != minus_test: " << (test != minus_test) << endl;
    cout << "a < b: " << (a < b) << endl;
    cout << "b < a: " << (b < a) << endl;
    cout << "a > b: " << (a > b) << endl;
    cout << "b > a: " << (b > a) << endl;
    
    cout << "----------------------------------------------------" << endl;
    Mystring concat_test1{"Oh"};
    Mystring concat_test2{"Hi"};
    Mystring result;
    cout << "concat_test1: ";
    concat_test1.display();
    cout << "concat_test2: ";
    concat_test2.display();
    result = concat_test1 + concat_test2;
    cout << "concat_test1 + concat_test2: ";
    result.display();
    
    cout << "----------------------------------------------------" << endl;
    Mystring mult_test{"abc"};
    cout << "mult_test: ";
    mult_test.display();
    result = mult_test * 3;
    cout << "mult_test * 3: ";
    result.display();
    
    cout << "----------------------------------------------------" << endl;
    Mystring incrementor1{"ABC"};
    Mystring incrementor2{"ABC"};
    result += incrementor1;
    result.display();
    result += incrementor2;
    result.display();
    
    cout << endl;
    return 0;
}