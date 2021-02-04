#include <iostream>
#include <string> 
#include <map>
#include <set>
using namespace std;

class Person {
    friend std::ostream &operator<<(std::ostream &os,const Person &p);
    std::string name;
    int age;
public:
    Person() : name{"Unknown"}, age{0} {}
    Person(std::string name, int age) : name{name}, age{age} {}
    bool operator<(const Person &rhs) const {return this->age < rhs.age;}
    bool operator==(const Person &rhs) const {return this->name == rhs.name && this->age == rhs.age;}
};

std::ostream &operator<<(std::ostream &os,const Person &p){
    os << p.name << ":" << p.age;
    return os;
}

void display(const std::map<std::string, std::set<int>> &map){
    std::cout << "[ ";
    for (const auto &i : map){
        std::cout << i.first << ": [ ";
        for (const auto &el : i.second){
            std::cout << el << " ";
        }
        std::cout << "] ";
    }
    std::cout << "]" << std::endl;
}

template <typename T, typename X>
void display(const std::map<T,X> &map){
    std::cout << "[ ";
    for (const auto &i : map){
        std::cout << i.first << ":" << i.second << " ";
    }
    std::cout << "]" << std::endl;
}

void test1(){
    cout << "\nTest1 -----------------------------------------------" << endl;
    map<string, int> m {
        {"Larry",3},
        {"Moe",1},
        {"Curly",2}
    };
    display(m);
    
    m.insert(pair<string, int>("Anna",10));
    display(m);
    
    m.insert(make_pair("Joe",5));
    display(m);
    
    m["Frank"] = 18;
    display(m);
    
    m["Frank"] += 10;
    display(m);
    
    m.erase("Frank");
    display(m);
    
    cout << "Count for Joe: " << m.count("Joe") << endl;
    cout << "Count for Frank: " << m.count("Frank") << endl;
    
    auto it = m.find("Larry");
    if (it != m.end()){
        cout << "Found: " << it->first << ":" << it->second << endl;
    }
    
    m.clear();
    display(m);
}

void test2(){
    cout << "\nTest2 -----------------------------------------------" << endl;
    map<string, set<int>> grades {
        {"Larry", {100,90}},
        {"Moe", {94}},
        {"Curly", {80,90,100}}
    };
    display(grades);
    
    grades["Larry"].insert(95);
    display(grades);
    
    auto it = grades.find("Moe");
    if (it != grades.end()){
        it->second.insert(1000);
    }
    display(grades);
}

int main() {
    test1();
    test2();
    
    cout << endl;
    return 0;
}