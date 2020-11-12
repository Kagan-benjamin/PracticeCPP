#include <iostream>
#include <vector>
using namespace std;


int main() {
	
//    for (int num1 {1}; num1 <= 10; num1++){ // Multiplication Tables
//        for (int num2 {1}; num2 <= 10; num2++){
//            cout << num1 << " * " << num2 << " = " << num1*num2 << endl;
//        }
//        cout << "----------------------------------------------" << endl;
//    } 
  
    int num_items{};
    cout << "How many data items do you have? ";
    cin >> num_items;
    
    vector<int> data{};
  
    for (int i{}; i < num_items; i++){
        int data_item{};
        cout << "Please enter data item " << i+1 << ": ";
        cin >> data_item;
        data.push_back(data_item);
    }
    
    cout << "\nDisplaying Histogram" << endl;
    for (auto val : data){
        for (int i{}; i < val; i++){
            cout << "-";
            if ((i+1) % 5 == 0){
                cout << " ";
            }
        }
        cout << endl;
    }
  
    cout << endl;
    return 0;
}