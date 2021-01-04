#include <iostream>
#include <memory>
#include <vector>

class Test {
private:
    int data;
public:
    Test() : data{0} {std::cout << "\tTest constructor (" << data << ")" << std::endl; }
    Test(int data) : data{data} {std::cout << "\tTest constructor (" << data << ")" << std::endl; }
    ~Test() {std::cout << "\tTest destructor (" << data << ")" << std::endl; }
    
    int get_data() const {return data;}
};

// Function Prototypes

std::unique_ptr<std::vector<std::shared_ptr<Test>>> make(); // create unique_ptr, point to vector
void fill(std::vector<std::shared_ptr<Test>> &vec, int num); // loop num times and ask to enter integers, create shared_ptr and push_back
void display(const std::vector<std::shared_ptr<Test>> &vec); // iterate through vector and display data

// Function Definitions

std::unique_ptr<std::vector<std::shared_ptr<Test>>> make() {
    return std::make_unique<std::vector<std::shared_ptr<Test>>>();
}

void fill(std::vector<std::shared_ptr<Test>> &vec, int num) {
    int temp;
    for (int i{0}; i < num; i++){
        std::cout << "Please enter data point [" << i+1 << "]:";
        std::cin >> temp;
        vec.push_back(std::make_shared<Test>(temp));
    }
}

void display(const std::vector<std::shared_ptr<Test>> &vec) {
    for (const auto &ptr : vec){
        std::cout << "Data: " << ptr->get_data() << std::endl;
    }
}

int main() {
    std::unique_ptr<std::vector<std::shared_ptr<Test>>> vec_ptr;
    vec_ptr = make();
    std::cout << "How many data points do you want to enter: ";
    int num;
    std::cin >> num;
    fill(*vec_ptr, num);
    display(*vec_ptr);    
        
	std::cout << std::endl;
    return 0;
}