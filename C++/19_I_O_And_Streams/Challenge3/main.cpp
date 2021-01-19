#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool find_substring(const string &user_input, const string &current_word){
    size_t found = current_word.find(user_input);
    if (found == string::npos){
        return false;
    }
    else {
        return true;
    }
}

int main() {
    ifstream in_file;
    in_file.open("romeoandjuliet.txt");
    string user_input;
    string current_word;
    int word_count{0};
    int match_count{0};
    
    if(!in_file){
        cerr << "Problem opening file" << endl;
        return 1;
    }
    cout << "Please enter the substring to search: ";
    cin >> user_input;
    while (in_file >> current_word){
        word_count++;
        if (find_substring(user_input,current_word)){
            match_count++;
        }
    }
    cout << word_count << " words were searched..." << endl;
    cout << "The substring \"" << user_input << "\" was found " << match_count << " times " << endl;
    
	cout << endl;
    return 0;
}