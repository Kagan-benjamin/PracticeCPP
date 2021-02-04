#include <iostream>
#include <fstream>
#include <sstream>
#include <set>
#include <map>
#include <string>
#include <iomanip>

void display(const std::map<std::string, int> &map){
    std::cout << std::left << "Word:" << std::right << std::setw(17) << "Count:" << std::endl;
    std::cout << "----------------------" << std::endl;
    for (auto &el : map){
        std::cout << std::left << std::setw(15) << el.first << std::right << std::setw(7) << el.second << std::endl;
    }
}

void display_occurrence(const std::map<std::string, std::set<int>> &map){
    std::cout << std::setw(12) << std::left << "\nWord:" << "Occurrences:" << std::endl;
    std::cout << "-----------------------" << std::endl;
    for (auto &el : map){
        std::cout << std::left << std::setw(12) << el.first;
        std::cout << std::left << "[ ";
        for (auto data : el.second){
            std::cout << data << " ";
        }
        std::cout << "]" << std::endl;
    }
}

std::string clean_string(const std::string &s){
    std::string result;
    for (char c : s){
        if (c == '.' || c == ',' || c == ';' || c == ':'){
            continue;
        }
        else {
            result += c;
        }
    }
    return result;
}


int main() {
    int line_num{0};
    std::string current_word;
    std::string line;
    std::map<std::string, int> word_map;
    std::map<std::string, std::set<int>> occurrence_map;
    std::ifstream in_file;
    in_file.open("words.txt");
    
    if (!in_file){
        std::cerr << "Problem opening file" << std::endl;
        return 1;
    }
    
    while (std::getline(in_file,line)) {
        line_num++;
        std::stringstream ss(line);
        while (ss >> current_word){
            current_word = clean_string(current_word);
            word_map[current_word]++;
            occurrence_map[current_word].insert(line_num);
        }
    }
//    display(word_map);
    std::cout << "\n-----------------------------------------------------" << std::endl;
    display_occurrence(occurrence_map);
    
    in_file.close();
	std::cout << std::endl;
    return 0;
}