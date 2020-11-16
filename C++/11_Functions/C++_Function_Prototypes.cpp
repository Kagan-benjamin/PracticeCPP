#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
//Function Prototypes
double calc_volume(double radius, double height);
double calc_area(double height);
void area_circle();
void volume_cylinder();

int main() {
    area_circle();
    volume_cylinder();
    return 0;
}

double calc_area(double radius){
    return M_PI * radius * radius;
}

double calc_volume(double radius, double height){
    return calc_area(radius) * height;
}

void area_circle(){
    double radius{};
    cout << "\nPlease enter the radius of your circle: ";
    cin >> radius;
    cout << "The area of the circle with radius " << radius << " is: " << calc_area(radius) << endl;
}

void volume_cylinder(){
    double radius{};
    double height{};
    cout << "\nPlease enter the radius of your cylinder: ";
    cin >> radius;
    cout << "\nPlease enter the height of your cylinder: ";
    cin >> height;
    cout << "The volume of the cylinder with radius " << radius << " and height " << height << " is: " << calc_volume(radius, height) << endl;
}