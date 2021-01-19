#include <iostream>
#include <fstream>
#include <string>

void read_file(std::string file_name){
    std::ifstream in_file{file_name};
    std::string word;

    if(!in_file){
        std::cerr << "Error opening file" << std::endl;
    }
    while(in_file >> word){
        std::cout << word << std::endl;
    }
    in_file.close();
}