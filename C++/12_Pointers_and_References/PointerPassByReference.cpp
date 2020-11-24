#include <iostream>
#include <string>
#include <vector>

using namespace std;

void double_data(int *int_ptr){
    *int_ptr *= 2;
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void display(const vector<string> *v){
    for (auto str : *v){
        cout << str << " ";
    }
    cout << endl;
}

void display(int *array, int sentinel){
    while (*array != sentinel){
        cout << *array++ << " ";
    }
    cout << endl;
}

void display(vector<int> *v, int sentinel){
    for (auto val : *v){
        if (val != sentinel){
            cout << val << " ";
        }
        else {
            break;
        }
    }
    cout << endl;
}

int main() {
    int value {10};
    int *int_ptr {nullptr};
    
    cout << "Value: " << value << endl;
    double_data(&value);
    cout << "Value: " << value << endl;
    
    cout << "------------------------------------------" << endl;
    int_ptr = &value;
    double_data(int_ptr);
    cout << "Value: " << value << endl;
    
    cout << "------------------------------------------" << endl;
    int x{100}, y{200};
    cout << "\nx: " << x << endl;
    cout << "y: " << y << endl;
    swap(&x, &y);
    cout << "\nx: " << x << endl;
    cout << "y: " << y << endl;

    cout << "------------------------------------------" << endl;
    vector<string> stooges {"Larry","Moe","Curly"};
    display(&stooges);
    cout << "------------------------------------------" << endl;
    vector<int> scores {1,2,3,4,5,6,7,8,-1,99,100};
    display(&scores,-1);
    cout << "------------------------------------------" << endl;
    int numbers[] {1,2,3,4,69,420,999,-1,100};
    display(numbers,-1);
    
    cout << endl;
    return 0;
}
