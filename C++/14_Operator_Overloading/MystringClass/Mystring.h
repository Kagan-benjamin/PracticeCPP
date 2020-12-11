#ifndef _Mystring_H_
#define _Mystring_H_

class Mystring{
private:
    char *str; // pointer to a char[] that holds a C-style string
public:                         
    Mystring();                    // no-args constructor
    Mystring(const char *s);       // overloaded constructor
    Mystring(const Mystring &source); // copy constructor
    Mystring(Mystring &&source);      // move constructor
    ~Mystring();                   // destructor
    
    Mystring &operator=(const Mystring &rhs);  // copy assignment
    Mystring &operator=(Mystring &&rhs);       // move assignment
    
    Mystring operator-() const;     // unary operator so no parameters (has this)
    Mystring operator+(const Mystring &rhs) const;  // concatenate
    bool operator==(const Mystring &rhs) const;     // check equality 
    
    
    void display() const;
    int get_length() const;          // getters
    const char *get_str() const;
};

#endif // _Mystring_H_