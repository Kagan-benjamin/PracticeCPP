#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream in_file;
    string line;
    
    in_file.open("poem.txt");
    if(!in_file){
        cerr << "Problem Opening File" << endl;
        return 1;
    }
    while (getline(in_file, line)){
        cout << line << endl;
    }
    
    in_file.close();
	cout << endl;
    return 0;
}