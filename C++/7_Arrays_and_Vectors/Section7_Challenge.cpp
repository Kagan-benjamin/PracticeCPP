#include <iostream>
#include <vector> 
using namespace std;

int main() {
	vector <int> vector1;
    vector <int> vector2;
    
    vector1.push_back(10);
    vector1.push_back(20);
    
    cout << "Vector1 Elements:" << endl;
    cout << "El 1: " << vector1.at(0) << endl;
    cout << "El 2: " << vector1.at(vector1.size()-1) << endl;
    cout << "Vector1 Size: " << vector1.size() << " elements" << endl;
    
    vector2.push_back(100);
    vector2.push_back(200);
    
    cout << "\nVector2 Elements:" << endl;
    cout << "El 1: " << vector2.at(0) << endl;
    cout << "El 2: " << vector2.at(vector2.size()-1) << endl;
    cout << "Vector2 Size: " << vector2.size() << " elements" << endl;
    
    vector <vector<int>> vector_2d;
    
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    
    cout << "\nVector-2D Elements:" << endl;
    cout << "Row 1 / Column 1: " << vector_2d.at(0).at(0) << endl;
    cout << "Row 1 / Column 2: " << vector_2d.at(0).at(1) << endl;
    cout << "Row 2 / Column 1: " << vector_2d.at(1).at(0) << endl;
    cout << "Row 2 / Column 2: " << vector_2d.at(1).at(1) << endl;
    
    vector1.at(0) = 1000;
    
    cout << "\nVector-2D Elements:" << endl;
    cout << "Row 1 / Column 1: " << vector_2d.at(0).at(0) << endl;
    cout << "Row 1 / Column 2: " << vector_2d.at(0).at(1) << endl;
    cout << "Row 2 / Column 1: " << vector_2d.at(1).at(0) << endl;
    cout << "Row 2 / Column 2: " << vector_2d.at(1).at(1) << endl;
    
    cout << "\nVector1 Elements:" << endl;
    cout << "El 1: " << vector1.at(0) << endl;
    cout << "El 2: " << vector1.at(vector1.size()-1) << endl;
    return 0;
}
