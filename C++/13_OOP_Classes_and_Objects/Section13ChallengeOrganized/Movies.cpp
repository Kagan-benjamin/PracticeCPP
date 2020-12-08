#include "Movies.h"

Movies::Movies(vector<Movie> movie_v)
    : movie_collection{movie_v}{
}

Movies::Movies(const Movies &source)
    : Movies{source.movie_collection} {
}

Movies::~Movies(){}


void Movies::add_movie(string name_val,string rating_val,int watched_val){
    bool match{false};
    for (Movie &movie : movie_collection){
        if (movie.get_name() == name_val){
            match = true;
            break;
        }
    }
    if (match){
        cout << "ERROR: This movie is already in the collection." << endl;
    }
    else {
    Movie new_movie{name_val, rating_val, watched_val};
    movie_collection.push_back(new_movie);
    cout << "You added: " << name_val << " to the movie collection." << endl;
    }
}

void Movies::watch_movie(string name_val){
    bool match{false};
    int total_movies{Movies::get_total_movies()};
    for (Movie &movie : movie_collection){
        if (movie.get_name() == name_val){
            movie.increment_watched();
            cout << "You just watched " << movie.get_name() << endl;
            match = true;
            break;
        } 
    }
    if (!match){
        cout << "You cannot watch a film outside the collection" << endl;
    }
}

void Movies::display_watched(string name_val){
    int total_movies{Movies::get_total_movies()};
    for (int i{0}; i < total_movies; i++){
        if (movie_collection[i].get_name() == name_val){
            cout << movie_collection[i].get_name() << " has been watched: " <<  movie_collection[i].get_watched() << " times." << endl;
            break;
        } 
    }
}

void Movies::display_all(){
    if (Movies::get_total_movies() == 0){
        cout << "Sorry, no movies yet." << endl;
    }
    else {
        cout << "Display All Movies: " << endl;
        for (int i{0}; i < Movies::get_total_movies(); i++){
            cout << movie_collection[i].get_name() << " has been watched: " <<  movie_collection[i].get_watched() << " times." << endl;
        }
    }
}