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
            std::strcpy(str,s);
        }
}

Mystring::~Mystring(){
    delete[] str;
}


////////////////

Mystring::Mystring(const Mystring &source)
    : str{nullptr}{
        str = new char[std::strlen(source.str)+1];
        std::strcpy(str,source.str);
}

Mystring::Mystring(Mystring &&source)
    : str(source.str){
        source.str = nullptr;
}

/////////////////

Mystring &Mystring::operator=(const Mystring &rhs){
    if (this == &rhs){
        return *this;
    }
    delete[] this->str;
    str = new char[std::strlen(rhs.str)+1];
    std::strcpy(str,rhs.str);
    return *this;
}

Mystring &Mystring::operator=(Mystring &&rhs){
    if (this == &rhs){
        return *this;
    }
    delete[] this->str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}

////////////////////// Overloaded Operators /////////////////////////

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

Mystring operator*(const Mystring &obj, const int x){
    Mystring temp;
    for (int i{0}; i < x; i++){
        temp = temp + obj;
    }
    return temp;
}

Mystring &operator*=(Mystring &obj, const int x){
    obj = obj * x;
    return obj;
}

Mystring operator+(const Mystring &lhs, const Mystring &rhs){
    char *buff = new char[std::strlen(lhs.str)+std::strlen(rhs.str)+1];
    std::strcpy(buff, lhs.str);
    std::strcat(buff, rhs.str);
    Mystring temp{buff};
    delete[] buff;
    return temp;
}

Mystring &operator+=(Mystring &lhs, const Mystring &rhs){
    lhs = lhs + rhs;
    return lhs;
}

bool operator==(const Mystring &lhs, const Mystring &rhs){
    return (std::strcmp(lhs.str,rhs.str) == 0);
}

bool operator!=(const Mystring &lhs, const Mystring &rhs){
    return !(std::strcmp(lhs.str,rhs.str) == 0);
}

bool operator<(const Mystring &lhs, const Mystring &rhs){
    if (lhs.str < rhs.str){
        return true;
    }
    return false;
}

bool operator>(const Mystring &lhs, const Mystring &rhs){
    if (lhs.str > rhs.str){
        return true;
    }
    return false;
}

Mystring &operator++(Mystring &obj){
    for (size_t i{0}; i < std::strlen(obj.str); i++){
        obj.str[i] = std::toupper(obj.str[i]);
    }
    return obj;
}

Mystring operator++(Mystring &obj, int){
    Mystring temp{obj};
    ++obj;   // make sure to call pre-increment
    return temp;
} 

////////////////////////////////////////////////////////////////////

void Mystring::display() const{
    std::cout << str << " : " << get_length() << std::endl;
}

int Mystring::get_length() const{
    return std::strlen(str);
}


// Member function implementations:

/*

bool Mystring::operator==(const Mystring &rhs) const{
    return (std::strcmp(str,rhs.str) == 0);
}

bool Mystring::operator!=(const Mystring &rhs) const{
    return !(std::strcmp(str,rhs.str) == 0);
}

bool Mystring::operator<(const Mystring &rhs) const{
    return (std::strcmp(str, rhs.str) < 0);
}

bool Mystring::operator>(const Mystring &rhs) const{
    return (std::strcmp(str, rhs.str) > 0);
}

Mystring Mystring::operator-() const{
    char *buff = new char[std::strlen(str)+1];
    std::strcpy(buff,str);
    for (size_t i{0}; i < std::strlen(buff); i++){
        buff[i] = std::tolower(buff[i]);
    }
    Mystring temp{buff};
    delete[] buff;
    return temp;
}

Mystring Mystring::operator+(const Mystring &rhs) const{
    char *buff = new char[std::strlen(str)+std::strlen(rhs.str)+1];
    std::strcpy(buff,str);
    std::strcat(buff,rhs.str);
    Mystring temp{buff};
    delete[] buff;
    return temp;
}

Mystring &Mystring::operator+=(const Mystring &rhs){
    *this = *this + rhs;
    return *this;
}

Mystring &Mystring::operator*(int x) const{
    Mystring temp;
    for (size_t i{0}; i <= n; i++){
        temp = temp + *this;
    }
    return temp;
}

Mystring &Mystring::operator*=(int x){
    *this = *this * x;
    return *this;
}
 
Mystring &Mystring::operator++(){
    for (size_t i{0}; i < std::strlen(str); i++){
        str[i] = std::toupper(str[i]);
    }
    return *this;
}
 
Mystring Mystring::operator++(int){
    Mystring temp{*this};
    operator++();
    return temp;
}
  
 
*/