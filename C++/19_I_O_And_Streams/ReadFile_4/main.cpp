#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream in_file;
    char c;
    in_file.open("poem.txt");
    
    if(!in_file){
        cerr << "Problem Opening File" << endl;
        return 1;
    }
    
    while(in_file.get(c)){
        cout << c;
    }
    
    in_file.close();
	cout << endl;
    return 0;
}
