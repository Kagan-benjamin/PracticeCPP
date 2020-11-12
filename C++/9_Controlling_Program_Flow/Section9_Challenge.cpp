#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    vector<int> list{};
    char selection{};
    do {
        cout << "\nHello and Welcome to Integer Collection Manipulation!" << endl;
        cout << "--------------------------------------------------" << endl;
        cout << "P - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "X - Clear collection" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "F - Find a number and display count" << endl;
        cout << "Q - Quit" << endl;
        cout << "--------------------------------------------------" << endl << endl;
        cout << "Please enter your selection: ";
        cin >> selection;
        
        
       
        switch (selection){
            case 'P':
            case 'p':
            {
                if (list.size() > 0){
                    cout << "[ ";
                    for (auto val : list){
                        cout << val << " ";
                    } 
                    cout << "]";
                }
                else {
                    cout << "[] - The list is empty" << endl;
                }
                break;
            }
            case 'A':
            case 'a':
            {
                int new_num{};
                bool duplicate_toggle{false}, valid{false};
                cout << "Please enter an integer: ";
                cin >> new_num;
                do {
                  if (duplicate_toggle){
                    duplicate_toggle = false;
                    cout << "\nPlease enter another integer: ";
                    cin >> new_num;
                  }
                  for (auto value : list){
                    if (value == new_num){
                        cout << "No duplicates allowed";
                        duplicate_toggle = true;
                        break;
                    }
                  }
                  if (!duplicate_toggle){
                    list.push_back(new_num); 
                    valid = true;
                  }
                } while (!valid);
                
                cout << new_num << " added" << endl;
                break;
            }
            case 'M':
            case 'm':
            {
                if (list.size() > 0) {
                    double avg{0.0};
                    double sum{0.0};
                    for (auto val : list){
                        sum += val;
                    }
                    avg = (sum / list.size());
                    cout << "The mean of the list is: " << avg << endl;
                }
                else {
                    cout << "Unable to calculate the mean - no data" << endl;
                }
                break;
            }
            case 'S':
            case 's':
            {
                if (list.size() > 0){
                    int smallest{list.at(0)};
                    for (auto val : list){
                        if (val < smallest){
                            smallest = val;
                        }
                    }
                    cout << "The smallest number is " << smallest << endl;
                }
                else {
                    cout << "Unable to determine the smallest number - no data" << endl;
                }
                break;
            }
            case 'L':
            case 'l':
            {
                if (list.size() > 0){
                    int largest{list.at(0)};
                    for (auto val : list){
                        if (val > largest){
                            largest = val;
                        }
                    }
                    cout << "The largest number is " << largest << endl;
                }
                else {
                    cout << "Unable to determine the largest number - no data" << endl;
                }
                break;
            }
            case 'F':
            case 'f':
            {
                if (list.size() > 0){
                    int target{}, count{};
                    cout << "Please enter a target integer to find: ";
                    cin >> target;
                    for (auto value : list){
                        if (value == target){
                            count++;
                        }
                    }
                    cout << "Target Integer: " << target << " | Count: " << count << endl;
                }
                else {
                    cout << "Unable to find selected number - no data" << endl;
                }
                break;
            }
            case 'X':
            case 'x':
            {
                if (list.size() > 0){
                    list.clear();
                }
                cout << "The collection has been cleared." << endl;
                break;
            }
            case 'Q':
            case 'q':
                cout << endl << "Goodbye!" << endl;
                break;
            default:
                cout << endl << "Unknown selection, please try again" << endl;
        }
    } while (selection != 'Q' && selection != 'q');
        
    cout << endl << endl;
    return 0;
}