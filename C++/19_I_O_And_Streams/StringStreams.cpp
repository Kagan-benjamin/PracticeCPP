#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
#include <limits>

int main() {
    int num{};
    double total{};
    std::string name{};
    
    std::string info{"Ben 100 1234.5"};
    std::istringstream iss{info};
    
    iss >> name >> num >> total;
    std::cout << std::setw(10) << std::left << name
              << std::setw(5)  << num                        // stream is cout
              << std::setw(10) << total << std::endl;
    
    std::cout << "\n-----------------------------------------------------" << std::endl;
    std::ostringstream oss{};
    oss << std::setw(10) << std::left << name
        << std::setw(5)  << num                              // stream is oss
        << std::setw(10) << total << std::endl;
    std::cout << oss.str() << std::endl;                     // formatting persists
    
    std::cout << "\n-----------------------------------------------------" << std::endl;
    int value{};
    std::string entry{};
    bool done{false};
    do {
        std::cout << "Please enter an integer: ";
        std::cin >> entry;
        std::istringstream validator{entry};
        if (validator >> value){
            done = true;
            std::cout << "Sucessfully inputted integer" << std::endl;
        }
        else {
            std::cout << "Sorry, that is not an integer" << std::endl;
            // Discard the input buffer:
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');  // cleans out stream for next iteration of loop
        }
    } while (!done);
    std::cout << "You entered the integer: " << value << std::endl;
    
	std::cout << std::endl;
    return 0;
}