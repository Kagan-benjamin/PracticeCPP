#include <cstring>
#include <iostream>
#include "Mystring.h"

Mystring::Mystring()
    : str{nullptr}{
        str = new char[1];
        *str = '\0';
}

Mystring::Mystring(const char *s)
    : str{nullptr}{
        if (s == nullptr){
            str = new char[1];
            *str = '\0';
        }
        else {
            str = new char[std::strlen(s)+1];
            std::strcpy(str, s);
        }
}

Mystring::Mystring(const Mystring &source)
    : str{nullptr}{
        str = new char[std::strlen(source.str)+1];
        std::strcpy(str, source.str);
        std::cout << "Copy Constructor" << std::endl;
}

Mystring::Mystring(Mystring &&source)
    : str(source.str){
        source.str = nullptr;
        std::cout << "Move Constructor" << std::endl;
}

Mystring::~Mystring(){
    delete[] str;
}

//////////////// Overloaded Assignment Operators

Mystring &Mystring::operator=(const Mystring &rhs){
    if (this == &rhs){
        return *this;
    }
    delete[] this->str;
    str = new char[std::strlen(rhs.str)+1];
    std::strcpy(str, rhs.str);
    std::cout << "Using Copy Assignment" << std::endl;
    return *this;
}
    
    
Mystring &Mystring::operator=(Mystring &&rhs){
    if (this == &rhs){
        return *this;
    }
    delete[] this->str;
    str = rhs.str; 
    rhs.str = nullptr;
    std::cout << "Using Move Assignment" << std::endl;
    return *this;
}

//////////////////  Global Operators

bool operator==(const Mystring &lhs, const Mystring &rhs){
    return (std::strcmp(lhs.str, rhs.str) == 0);
}

Mystring operator-(const Mystring &obj){
    char *buff = new char[std::strlen(obj.str)+1];
    std::strcpy(buff, obj.str);
    for (size_t i{0}; i < std::strlen(buff); i++){
        buff[i] = std::tolower(buff[i]);
    }
    Mystring temp{buff};
    delete[] buff;
    return temp;
}

Mystring operator+(const Mystring &lhs, const Mystring &rhs){
    char *buff = new char[std::strlen(lhs.str) + std::strlen(rhs.str)+1];
    std::strcpy(buff, lhs.str);
    std::strcat(buff, rhs.str);
    Mystring temp{buff};
    delete[] buff;
    return temp;
}

/////////////////////

void Mystring::display() const {
    std::cout << str << " : " << get_length() << std::endl;
}
 
int Mystring::get_length() const {
    return std::strlen(str);
}

const char *Mystring::get_str() const{
    return str;
}