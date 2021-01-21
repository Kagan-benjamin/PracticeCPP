#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    ifstream in_file {"romeoandjuliet.txt"};
    ofstream out_file {"poem_copy.txt"};
    if (!in_file){
        cerr << "Problem opening file" << endl;
        return 1;
    }
    if (!out_file){
        cerr << "Problem creating file" << endl;
        return 1;
    }
    
    string line{};
    int line_count{0};
    while (getline(in_file, line)){
//        if (line_count > 0 && line_count < 10){
//            out_file << line_count << "       ";
//        }
//        else if (line_count > 9 && line_count < 100){
//            out_file << line_count << "      ";
//        }                                                  // Formatting by removing an empty space after line_count
//        else if (line_count > 99 && line_count < 1000){
//            out_file << line_count << "     ";
//        }
//        else {
//            out_file << line_count << "     ";
//        }
        if (line == ""){
            out_file << endl;
        }
        else {
          ++line_count;
          out_file << setw(7) << left << line_count << line << endl;
        }
//        line_count++;                                      // Formatting by removing an empty space after line_count
//        out_file << line << endl;
    }
    cout << "File Copied" << endl;
    
    in_file.close();
    out_file.close();
	cout << endl;
    return 0;
}
