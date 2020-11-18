#include <iostream>
#include <vector>
using namespace std;

void menu();
void print_list(vector<int> v);
void add_int_to_list(vector<int> &v);
void mean_of_list(vector<int> v);
void smallest_of_list(vector<int> v);
void largest_of_list(vector<int> v);
void find_target(vector<int> v);
void clear_list(vector<int> &v);
void handle_goodbye();
char handle_selection();

int main() {
    
    vector<int> list{};
    char selection{};
    
    do {
        menu();
        selection = handle_selection();
        switch (selection){
            case 'P':
            case 'p':
            {
                print_list(list);
                break;
            }
            case 'A':
            case 'a':
            {
                add_int_to_list(list);
                break;
            }
            case 'M':
            case 'm':
            {
                mean_of_list(list);
                break;
            }
            case 'S':
            case 's':
            {
                smallest_of_list(list);
                break;
            }
            case 'L':
            case 'l':
            {
                largest_of_list(list);
                break;
            }
            case 'F':
            case 'f':
            {
                find_target(list);
                break;
            }
            case 'X':
            case 'x':
            {
                clear_list(list);
                break;
            }
            case 'Q':
            case 'q':
                handle_goodbye();
                break;
            default:
                cout << endl << "Unknown selection, please try again" << endl;
        }
    } while (selection != 'Q' && selection != 'q');
        
    cout << endl << endl;
    return 0;
}


void menu(){
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
}

void print_list(vector<int> v){        
    if (v.size() > 0){
        cout << "[ ";
        for (auto val : v){
            cout << val << " ";
        } 
        cout << "]";
    }
    else {
        cout << "[] - The list is empty" << endl;
    }
}

void add_int_to_list(vector<int> &v){
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
        for (auto value : v){
            if (value == new_num){
                cout << "No duplicates allowed";
                duplicate_toggle = true;
                break;
            }
        }
        if (!duplicate_toggle){
            v.push_back(new_num); 
                valid = true;
            }
    } while (!valid);
    cout << new_num << " added" << endl;
}

void mean_of_list(vector<int> v){
    if (v.size() > 0) {
        double avg{0.0};
        double sum{0.0};
        for (auto val : v){
            sum += val;
        }
        avg = (sum / v.size());
        cout << "The mean of the list is: " << avg << endl;
    }
    else {
        cout << "Unable to calculate the mean - no data" << endl;
    }
}

void smallest_of_list(vector<int> v){
    if (v.size() > 0){
        int smallest{v.at(0)};
        for (auto val : v){
            if (val < smallest){
                smallest = val;
            }
        }
        cout << "The smallest number is " << smallest << endl;
    }
    else {
        cout << "Unable to determine the smallest number - no data" << endl;
    }
}

void largest_of_list(vector<int> v){
    if (v.size() > 0){
        int largest{v.at(0)};
        for (auto val : v){
            if (val > largest){
                largest = val;
            }
        }
        cout << "The largest number is " << largest << endl;
    }
    else {
        cout << "Unable to determine the largest number - no data" << endl;
    }
}

void find_target(vector<int> v){                
    if (v.size() > 0){
        int target{}, count{};
        cout << "Please enter a target integer to find: ";
        cin >> target;
        for (auto value : v){
            if (value == target){
                count++;
            }
        }
        cout << "Target Integer: " << target << " | Count: " << count << endl;
    }
    else {
        cout << "Unable to find selected number - no data" << endl;
    }
}

void clear_list(vector<int> &v){                
    if (v.size() > 0){
        v.clear();
    }
    cout << "The collection has been cleared." << endl;
} 

char handle_selection(){
    char selection{};
    cin >> selection;
    return toupper(selection);
}

void handle_goodbye(){
    cout << endl << "Goodbye!" << endl;
}