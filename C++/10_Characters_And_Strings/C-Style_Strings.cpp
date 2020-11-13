#include <iostream>
#include <cstring> // for c-style string functions
#include <cctype>  // for character-based functions
using namespace std;


int main() {
    char first_name[20]{};
    char last_name[20]{};
    char full_name[50]{};
    char temp[50]{};
    
    cout << "Please enter your first name: ";
    cin >> first_name;
    
    cout << "Please enter your last name: ";
    cin >> last_name;
    cout << "---------------------------------------------" << endl;
    
    cout << "Hello " << first_name << ", your first name has " 
    << strlen(first_name) << " characters" << endl;
    cout << "Your last name, " << last_name << ", has " 
    << strlen(last_name) << " characters" << endl;
    
    strcpy(full_name, first_name); // copy first_name to full_name
    strcat(full_name, " "); // add " " to full_name
    strcat(full_name, last_name); // concat last_name to full_name
    cout << "----------------------------------------------------" << endl;
    cout << "Your full name is: " << full_name << endl;
//    
//    cout << "----------------------------------------------------" << endl;
//    cout << "Please enter your full name: ";
//    cin.getline(full_name, 50);
//    cout << "Your full name is " << full_name << endl;
    
    cout << "----------------------------------------------------" << endl;
    strcpy(temp, full_name);
    if(strcmp(temp, full_name) == 0){
        cout << temp << " and " << full_name << " are the same." << endl;
    }
    else{
        cout << temp << " and " << full_name << " are different." << endl;
    }
    
    cout << "----------------------------------------------------" << endl;
    for(size_t i{0}; i < strlen(full_name); i++){
        if(isalpha(full_name[i])){
            full_name[i] = toupper(full_name[i]);
        }
    }
    cout << "Your full name is " << full_name << endl;
    
    
    return 0;
}

/* C-Style String Coding Challenge:

#include <iostream>
#include <cstring>
using namespace std;

void strings_and_functions() {
    
    //----WRITE YOUR CODE BELOW THIS LINE----
    char first_name[]{"Bjarne"};
    char last_name[]{"Stroustrup"};
    char whole_name[50];
    int first_name_length{strlen(first_name)};
    int last_name_length{strlen(last_name)};
    
    strcpy(whole_name, first_name);
    strcat(whole_name, last_name);
    int whole_name_length{strlen(whole_name)};
    
    
    //----WRITE YOUR CODE ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    
    cout << "The length of the first name, " << first_name << ", is " << first_name_length << " letters long and the length of the last name, " << last_name << ", is " << last_name_length << " letters long. This means that the length of the whole name must be " << whole_name_length << " letters long.";
}


*/