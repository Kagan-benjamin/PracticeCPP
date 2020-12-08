#include <iostream>
#include <string>
#include <vector>
#include "Movie.h"
#include "Movies.h"

using namespace std;

void display_total_movies(Movies movies){
    cout << "Total Movies: " << movies.get_total_movies() << endl;
}

int main() {
    
    return 0;
}