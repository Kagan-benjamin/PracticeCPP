#include <iostream>
#include <string>
using namespace std;

double calc_cost(double base_cost, double tax_rate = 0.06);
void greeting(string name, string prefix = "Mr.", string suffix = "");
                                     
int main(){
    double cost{0};
    cost = calc_cost(200.0);          // Utilizes default tax_rate value
    cout << "The final cost with default tax rate is: " << cost << endl;
    cost = calc_cost(200.0, 0.08);    // Accepts custom tax_rate value
    cout << "The final cost with custom tax rate of 0.08 is: " << cost << endl;
    
    cout << "\n--------------------------------------------------------------";
    string name{"Benjamin"};
    greeting(name); 
    cout << "\nGreeting with custom actual parameters: ";
    greeting("Layla Wolthausen", "Mrs.", "");
    
    cout << endl;
    return 0;
}

double calc_cost(double base_cost, double tax_rate){
    return base_cost += (base_cost * tax_rate);
}

void greeting(string name, string prefix, string suffix){
    cout << "\nHello " << prefix + " " + name + " " + suffix << endl;
}