// Program should console out:
/*
Student    Score
----------------
Frank          5
Ben            1
----------------
Average Score: 3
*/ 

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;

int main() {
    const int total_width{20};
    const int field1_width{15};
    const int field2_width{5};
    
    ifstream in_file;
    
    bool name_toggle{true};
    
    string key;
    string test;
    
    int total_students{0};
    int score{0};
    int score_total{0};
    double avg_score;
    
    
    in_file.open("responses.txt");
    if(!in_file){
        cerr << "Problem opening file" << endl;
        return 1;
    }
    else {
        cout << setw(field1_width) << left << "Student"
             << setw(field2_width) << right << "Score" << endl;
        cout << setw(total_width) << setfill('-') << "" << endl;
        in_file >> key;
        cout << setfill(' ');
        
        while (in_file >> test){
            if (name_toggle){
                cout << setw(field1_width) << left << test;
                name_toggle = !name_toggle;
            }
            else {
                total_students++;
                for (size_t i{0}; i < 5; i++){
                    if (test[i] == key[i]){
                        score++;
                    }
                }
                cout << setw(field2_width) << right << score << endl;
                score_total += score;
                score = 0;
                name_toggle = !name_toggle;
            }
        }
        avg_score = static_cast<double>(score_total) / total_students;
        cout << setw(total_width) << setfill('-') << "" << endl;
        cout << setfill(' ');
        cout << setprecision(2) << fixed << setw(field1_width) << left << "Average Score:" 
             << setw(field2_width) << right << avg_score;
        in_file.close();
    }
    
	cout << endl << endl;
    return 0;
}