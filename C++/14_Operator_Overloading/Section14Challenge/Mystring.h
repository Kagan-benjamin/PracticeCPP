#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring {
private:
    char *str;
public:
    Mystring();
    Mystring(const char *s);
    ~Mystring();
    ///////////////////////////
    Mystring(const Mystring &source);
    Mystring(Mystring &&source);
    ///////////////////////////
    Mystring &operator=(const Mystring &rhs);
    Mystring &operator=(Mystring &&rhs);
    
    friend Mystring operator-(const Mystring &obj);
    
    friend Mystring operator+(const Mystring &lhs, const Mystring &rhs);
    friend bool operator==(const Mystring &lhs, const Mystring &rhs);
    friend bool operator!=(const Mystring &lhs, const Mystring &rhs);
    friend bool operator<(const Mystring &lhs, const Mystring &rhs);
    friend bool operator>(const Mystring &lhs, const Mystring &rhs);
    
    friend Mystring &operator+=(Mystring &lhs, const Mystring &rhs);
    friend Mystring operator*(const Mystring &obj, const int x);
    friend Mystring &operator*=(Mystring &lhs, const int x);
    
    friend Mystring &operator++(Mystring &obj);
    friend Mystring operator++(Mystring &obj, int);
    
    friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
    friend std::istream &operator>>(std::istream &is, Mystring &rhs);
    
    /*  as class methods:
     *  Mystring operator-() const;
     *  Mystring operator+(const Mystring &rhs) const;
     *  bool operator==(const Mystring &rhs) const;
     *  bool operator!=(const Mystring &rhs) const;
     *  bool operator<(const Mystring &rhs) const;
     *  bool operator>(const Mystring &rhs) const;
     *  Mystring &operator+=(const Mystring &rhs);
     *  Mystring operator*(int x) const;
     *  Mystring &operator^=(int x);
     *  Mystring &operator++();
     *  Mystring operator++(int);
     */
    
    void display() const;
    int get_length() const;
};

#endif // _MYSTRING_H_