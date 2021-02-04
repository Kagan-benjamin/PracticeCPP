#include <iostream>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <iomanip>
using namespace std;

bool is_palindrome(const string &s){
    stack<char> stk;
    queue<char> q;
    for (char c : s){
        if (isalpha(c)){
            c = toupper(c);
            q.push(c);
            stk.push(c);
        }
    }
    while (!q.empty()){
        if (stk.top() == q.front()){
            stk.pop();
            q.pop();
        }
        else {
            return false;
        }
    }
    return true;
}


int main() {
    vector<string> test_strings{"a","aa","aba","abba","abbcbba","ab","abc","radar","bob",
        "ana","avid diva","Amore, Roma","A Toyota's a toyota","A Santa at NASA","C++",
        "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!",
        "This is a palindrome","palindrome"};
    
	cout << left << setw(67) << "Word:";
    cout << right << "Result:" << endl;
    cout << "--------------------------------------------------------------------------" << endl;
    
    cout << boolalpha;
    for (string str : test_strings){
        cout << left << setw(70) << str;
        cout << right << is_palindrome(str) << endl;
    }
    
    
    
    cout << endl;
    return 0;
}