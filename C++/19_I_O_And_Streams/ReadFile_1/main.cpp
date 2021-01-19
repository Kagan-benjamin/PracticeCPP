#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string line;
    int num;
    double total;
	ifstream in_file;
    
    in_file.open("test.txt");   // "C:\\dir\\dir2\\test.txt"  on Windows use double slash to exist character literals
                                // ties program to your exact computer file directory hierarchy
                                // better to set up as maleable "test.txt"
    if (!in_file){
        cerr << "Problem Opening File" << endl;
        return 1;
    }
    
    cout << "File is ready to read:" << endl << endl;
//    while (getline(in_file, line)){
//        cout << line << endl;             // Copy entire file into string line
//    } 
    in_file >> line >> num >> total;                    
    cout << line << endl; 
    cout << num << endl;
    cout << total << endl;

    
    in_file.close();
    cout << endl;
    return 0;
}