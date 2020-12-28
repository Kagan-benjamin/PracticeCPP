#include <iostream>

using namespace std;

//// INTERFACE CLASS ////

class I_Printable {
    friend ostream &operator<<(ostream &os,const I_Printable &obj);
public:
    virtual void print(ostream &os) const = 0;
};

ostream &operator<<(ostream &os,const I_Printable &obj){
    obj.print(os);
    return os;
}

/////////////////////////

class Account : public I_Printable {
//    friend ostream &operator<<(ostream &os, const Account &acc);
public:
    virtual void print(ostream &os) const override {
        os << "Account display";
    }
    virtual void withdraw(double amount) {
        cout << "In Account::withdraw()" << endl;
    }
    virtual ~Account() {}
};

//ostream &operator<<(ostream &os, const Account &acc) {
//    os << "Account display";
//    return os;
//}

/////

class Checking : public Account {
//    friend ostream &operator<<(ostream &os, const Checking &acc);
public:
    virtual void print(ostream &os) const override {
        os << "Checking display";
    }
    virtual void withdraw(double amount) {
        cout << "In Checking::withdraw()" << endl;
    }
    virtual ~Checking() {}
};

//ostream &operator<<(ostream &os, const Checking &acc) {
//    os << "Checking display";
//    return os;
//}

/////

class Savings : public Account {
//    friend ostream &operator<<(ostream &os, const Savings &acc);
public:
    virtual void print(ostream &os) const override {
        os << "Savings display";
    }
    virtual void withdraw(double amount) {
        cout << "In Savings::withdraw()" << endl;
    }
    virtual ~Savings() {}
};

//ostream &operator<<(ostream &os, const Savings &acc) {
//    os << "Savings display";
//    return os;
//}

/////

class Trust : public Account {
//    friend ostream &operator<<(ostream &os, const Trust &acc);
public:
    virtual void print(ostream &os) const override {
        os << "Trust display";
    }
    virtual void withdraw(double amount) {
        cout << "In Trust::withdraw()" << endl;
    }
    virtual ~Trust() {}
};

//ostream &operator<<(ostream &os, const Trust &acc) {
//    os << "Trust display";
//    return os;
//}

class Dog : public I_Printable {
public:
    virtual void print(ostream &os) const override {
        os << "Woof woof woof";
    }
    virtual ~Dog() {}
};

int main() {
	Account a;
    cout << a << endl;
    Checking b;
    cout << b << endl;
    Savings c;
    cout << c << endl;
    Trust d;
    cout << d << endl;
    
    
    Account *p1 = new Account();
    cout << *p1 << endl;
    
    Account *p2 = new Checking();
    cout << *p2 << endl;
    
    Dog *d1 = new Dog();
    cout << *d1 << endl;
    Dog d2;
    cout << d2 << endl;
    
    
    delete p1;
    delete p2;
    delete d1;
    
    cout << endl;
    return 0;
}