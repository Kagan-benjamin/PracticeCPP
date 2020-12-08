#ifndef MOVIES_H
#define MOVIES_H

#include <iostream>
#include <string>
#include <vector>
#include "Movie.h"
using namespace std;

class Movies{
    vector<Movie> movie_collection;
public:
    Movies(vector<Movie> movie_v);
    Movies(const Movies &source);
    ~Movies();
    //
    void display_all();
    void add_movie(string name_val="None",string rating_val="G",int watched_val=0); 
    void watch_movie(string name_val);
    void display_watched(string name_val);
    int get_total_movies(){return movie_collection.size();}
};

#endif // MOVIES_H