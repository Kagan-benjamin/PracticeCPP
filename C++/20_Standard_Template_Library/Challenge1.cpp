/* Section 20 Challenge 1 - Deque
 * 
 * Write the following function: 
 * 
 * bool is_palindrome(const std::string &s){}
 * 
 * This function will expect a string and it must determine if 
 * that string is a palindrome and return true if it is, or false
 * if it is not. Please use a deque to solve the problem.
 * 
 * is_palindrome("A Santa at Nasa"); // true
 * is_palindrome("Hello");           // false 
 * 
 * test cases:
 * a       T|abc         F|A Toyota's a toyota T
 * aa      T|radar       T|A Santa at NASA     T
 * aba     T|bob         T|C++                 T ignores '+'
 * abba    T|ana         T|A man, a plan, a cat, a ham, a yak,
 * abbcbba T|avid diva   T|a yam, a hat, a canal-Panama!  T
 * ab      F|Amore, Roma T|This is a palindrome F
 *                         palindrome           F
 * */
#include <cctype>
#include <deque>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

bool is_palindrome(const std::string &s){
    std::deque<char> d;
    for (const auto &c : s){
        if (std::isalpha(c)){
            d.push_back(c);
        }
    }
    while (d.size() > 1){
        if (tolower(d.front()) != tolower(d.back())){
            return false;
        }
        else {
            d.pop_front();
            d.pop_back();
        }
    }
    return true;
}

int main() {
    std::vector<std::string> test_strings{"a","aa","aba","abba","abbcbba","ab","abc","radar","bob",
        "ana","avid diva","Amore, Roma","A Toyota's a toyota","A Santa at NASA","C++","A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!","This is a palindrome","palindrome"};
    std::cout << std::boolalpha;
    std::cout << std::setw(8) << std::left << "Result" << "String" << std::endl;
    for (const auto &s : test_strings){
        std::cout << std::setw(8) << std::left << is_palindrome(s) << s << std::endl;
    }
    
	std::cout << std::endl;
    return 0;
}