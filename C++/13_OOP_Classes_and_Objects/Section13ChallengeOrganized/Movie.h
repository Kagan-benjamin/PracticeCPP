#ifndef MOVIE_H
#define MOVIE_H

#include <string>
#include <vector>
using namespace std;

class Movie{
    string name;
    string rating;
    int watched;
public:
    Movie(string name_val="None",string rating_val="G",int watched_val=0);
    Movie(const Movie &source);
    ~Movie();
    //
    string get_name(){return name;}
    string get_rating(){return rating;}
    int get_watched(){return watched;}
    void increment_watched(){
        watched++;
    };
};

#endif // MOVIE_H