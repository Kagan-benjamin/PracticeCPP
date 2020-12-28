#include <iostream>
#include <vector>

using namespace std;


class Shape {                           // Abstract Base Class
private:
    // attributes common to all shapes
public:
    virtual void draw() = 0;            // pure virtual function
    virtual void rotate() = 0;          // pure virtual function
    virtual ~Shape() {}
};

class Open_Shape : public Shape {       // Abstract Class
public:
    virtual ~Open_Shape() {}
};

class Closed_Shape : public Shape {     // Abstract Class 
public:
    virtual ~Closed_Shape() {}
};

class Line : public Open_Shape {        // Concrete Class
public:
    virtual void draw() override {
        cout << "Drawing Line" << endl;
    }
    virtual void rotate() override {
        cout << "Rotating Line" << endl;
    }
    virtual ~Line() {}
};

class Circle : public Closed_Shape {    // Concrete Class
public:
    virtual void draw() override {
        cout << "Drawing Circle" << endl;
    }
    virtual void rotate() override {
        cout << "Rotating Circle" << endl;
    }
    virtual ~Circle() {}
};

class Square : public Closed_Shape {    // Concrete Class 
public:
    virtual void draw() override {
        cout << "Drawing Square" << endl;
    }
    virtual void rotate() override {
        cout << "Rotating Square" << endl;
    }
    virtual ~Square() {}
};

void screen_refresh(const vector<Shape *> &shapes) {
    cout << "Refreshing" << endl;
    for (const auto p : shapes){
        p->draw();
    }
}



int main() {
//    Shape s;  // error: cannot declare variable 's' to be of abstract type 'Shape'
//    Shape *p = new Shape(); // error    
    
    Shape *ptr = new Circle();
    ptr->draw();
    ptr->rotate();
    
    cout << "\n=== Vector of Shapes loop in main ===" << endl;
    Shape *s1 = new Circle();
    Shape *s2 = new Line();
    Shape *s3 = new Square();
    
    vector<Shape *> shapes {s1,s2,s3};
    for (const auto p : shapes){
        p->draw();
    }
    
    cout << "\n=== Vector of Shapes global function ===" << endl;
    screen_refresh(shapes);
    
    delete ptr;
    delete s1;
    delete s2;
    delete s3;
    
	cout << endl;
    return 0;
}