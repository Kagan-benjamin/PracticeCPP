#include <iostream>
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


///////

Movies::Movies(vector<Movie> movie_v)
    : movie_collection{movie_v}{
}

Movies::Movies(const Movies &source)
    : Movies{source.movie_collection} {
}

Movies::~Movies(){}


void Movies::add_movie(string name_val,string rating_val,int watched_val){
    bool match{false};
    for (int i{0}; i < Movies::get_total_movies(); i++){
        if (movie_collection[i].get_name() == name_val){
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
    for (int i{0}; i < total_movies; i++){
        if (movie_collection[i].get_name() == name_val){
            movie_collection[i].increment_watched();
            cout << "You just watched " << movie_collection[i].get_name() << endl;
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

////////


Movie::Movie(string name_val,string rating_val, int watched_val)
    : name{name_val}, rating{rating_val}, watched{watched_val} {
}

Movie::Movie(const Movie &source)
    : Movie{source.name, source.rating, source.watched} {
}

Movie::~Movie(){}

//////

void display_total_movies(Movies movies){
    cout << "Total Movies: " << movies.get_total_movies() << endl;
}

int main() {
    Movie cleaver{"Cleaver","R",3};
    Movie test{"Test","PG",5};
    Movie test2{"Test2","PG-13",7};
    cout << cleaver.get_name() << " | " << test.get_name() << endl;
    vector<Movie> movie_collection{cleaver,test};
    Movies movies{movie_collection};
    movies.display_all();
    

    cout << "---------------------------------------------" << endl;
    movies.add_movie("Test2","PG-13",7);
    display_total_movies(movies);
    movies.display_watched("Cleaver");
    movies.display_watched("Test");
    movies.display_watched("Test2");
    movies.watch_movie("Test2");
    movies.watch_movie("Test2");
    movies.display_watched("Test2");
    movies.watch_movie("Cleaver");
    movies.watch_movie("Cleaver");
    movies.watch_movie("Cleaver");    
    movies.display_watched("Cleaver");
    movies.add_movie("Test3","R",18);
    cout << "----------------------------------------" << endl;
    movies.watch_movie("Cleaver");    
    movies.watch_movie("WrongMovie");    
    movies.display_all();
    cout << endl;
    return 0;
}