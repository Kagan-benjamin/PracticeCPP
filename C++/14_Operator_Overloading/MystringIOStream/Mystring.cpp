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

Mystring::Mystring(const Mystring &source)
    : str{nullptr}{
        str = new char[std::strlen(source.str)+1];
        std::strcpy(str, source.str);
}

Mystring::Mystring(Mystring &&source)
    : str(source.str){
        source.str = nullptr;
}

Mystring::~Mystring(){
    delete[] str;
}

////////////////////

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

////////////////////////

std::ostream &operator<<(std::ostream &os, const Mystring &rhs){
    os << rhs.str;
    return os;
}

std::istream &operator>>(std::istream &is, Mystring &rhs){
    char *buff = new char[500];
    is >> buff;
    rhs = Mystring{buff};
    delete[] buff;
    return is;
}

////////////////////

void Mystring::display() const{
    std::cout << str << " : " << get_length() << std::endl;
}

int Mystring::get_length() const{
    return std::strlen(str);
}

const char *Mystring::get_str() const{
    return str;
}