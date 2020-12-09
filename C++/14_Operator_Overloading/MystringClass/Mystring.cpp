#include <cstring>
#include <iostream>
#include "Mystring.h"

Mystring::Mystring()
    : str{nullptr}{
        str = new char[1];        // Mystring a;
        *str = '\0';
        std::cout << "No-Args Constructor" << std::endl;
}

Mystring::Mystring(const char *s)
    : str{nullptr}{
        std::cout << "Overloaded Constructor" << std::endl;
        if (s == nullptr){        // Mystring a{"Hello"};
            str = new char[1];
            *str = '\0';
        }
        else {
            str = new char[std::strlen(s)+1];
            std::strcpy(str, s);   // copies
        }
}
    
Mystring::Mystring(const Mystring &source)
    : str{nullptr}{                       // Copy constructor
        str = new char[std::strlen(source.str)+1];
        std::strcpy(str, source.str);
        std::cout << "Copy Constructor" << std::endl;
}
   
Mystring::Mystring(Mystring &&source)     // Move constructor 
    : str(source.str) {
        source.str = nullptr;
        std::cout << "Move Constructor" << std::endl;
}
   
   
Mystring::~Mystring(){
    delete[] str;
}           
  
  
Mystring &Mystring::operator=(const Mystring &rhs){
    std::cout << "Copy Assignment" << std::endl;
    if (this == &rhs){
        return *this;
    }
    delete[] this->str;
    str = new char[std::strlen(rhs.str)+1];
    std::strcpy(str, rhs.str);
    return *this;
} 
  
Mystring &Mystring::operator=(Mystring &&rhs){
    std::cout << "Move Assignment" << std::endl;
    if (this == &rhs){
        return *this;
    }
    delete[] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}
  
  
  
  
void Mystring::display() const {
    std::cout << str << " : " << get_length() << std::endl;
}
    
int Mystring::get_length() const {
    return std::strlen(str);
}        

const char *Mystring::get_str() const {return str;}