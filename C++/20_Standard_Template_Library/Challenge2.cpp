// Section 20
// Challenge 2
//  Lists

#include <iostream>
#include <list>
#include <string>
#include <cctype>
#include <iomanip>
#include <iterator> 
#include <limits>

class Song {
    friend std::ostream &operator<<(std::ostream &os, const Song &s);
    std::string name;
    std::string artist;
    int rating;
public:
    // constructors 
    Song() = default;
    Song(std::string name, std::string artist, int rating)
            : name{name}, artist{artist}, rating{rating} {}
    // attribute getters
    std::string get_name() const {return name;}
    std::string get_artist() const {return artist;}
    int get_rating() const {return rating;}
    // overloaded operators
    bool operator<(const Song &rhs) const  {return this->name < rhs.name;}
    bool operator==(const Song &rhs) const  {return this->name == rhs.name;}
};

std::ostream &operator<<(std::ostream &os, const Song &s) {
    os << std::setw(20) << std::left << s.name
       << std::setw(30) << std::left << s.artist
       << std::setw(2) << std::left << s.rating;
       return os;
}

void display_menu() {
    std::cout << "\nF - Play First Song" << std::endl;
    std::cout << "N - Play Next song" << std::endl;
    std::cout << "P - Play Previous song" << std::endl;
    std::cout << "A - Add and play a new Song at current location" << std::endl;
    std::cout << "L - List the current playlist" << std::endl;
    std::cout << "===============================================" << std::endl;
    std::cout << "Enter a selection (Q to quit): ";
}

void play_current_song(const Song &song) {
    std::cout << "Playing: "<< song.get_name() << " by " << song.get_artist() << " | " << song.get_rating() << std::endl;
}

void display_playlist(const std::list<Song> &playlist, const Song &current_song) {
    for (const Song &song : playlist){
        std::cout << song << std::endl;
    }
    std::cout << std::endl << "Current Song: " << current_song.get_name() << " by " << current_song.get_artist() << " | " << current_song.get_rating() << std::endl;
}

int main() {

    std::list<Song> playlist{
            {"God's Plan",        "Drake",                     5},
            {"Never Be The Same", "Camila Cabello",            5},
            {"Pray For Me",       "The Weekend and K. Lamar",  4},
            {"The Middle",        "Zedd, Maren Morris & Grey", 5},
            {"Wait",              "Maroone 5",                 4},
            {"Whatever It Takes", "Imagine Dragons",           3}          
    };
    
    std::list<Song>::iterator current_song = playlist.begin();
    display_playlist(playlist, *current_song);
    std::string selection{};
    
    do {
        display_menu();
        std::cin >> selection;
        if (selection == "f" || selection == "F"){
            std::cout << "Playing First Song" << std::endl;
            current_song = playlist.begin();
            play_current_song(*current_song);
        }
        else if (selection == "n" || selection == "N"){
            std::cout << "Playing Next Song" << std::endl;
            current_song++;
            if (current_song == playlist.end()){
                std::cout << "Wrapping to Start of Playlist" << std::endl;
                current_song = playlist.begin();
            }
            play_current_song(*current_song);
        }
        else if (selection == "p" || selection == "P"){
            std::cout << "Playing Previous Song" << std::endl;
            if (current_song == playlist.begin()){
                std::cout << "Wrapping to End of Playlist" << std::endl;
                current_song = playlist.end();
            }
            current_song--;
            play_current_song(*current_song);
        }
        else if (selection == "a" || selection == "A"){
            std::string song_name{};
            std::string artist_name{};
            int song_rating{0};
            
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            
            std::cout << "Adding New Song. Please enter the name of the new song: ";
            std::getline(std::cin,song_name);
            std::cout << "\nPlease enter the artist of the new song: ";
            std::getline(std::cin,artist_name);
            std::cout << "\nPlease enter the rating for the new song: ";
            std::cin >> song_rating;
            
            playlist.insert(current_song,Song{song_name,artist_name,song_rating});
            current_song--;
            play_current_song(*current_song);
        }
        else if (selection == "l" || selection == "L"){
            display_playlist(playlist,*current_song);
        }
        else if (selection == "q" || selection == "Q"){
            std::cout << "Quitting" << std::endl;
        }
        else {
            std::cout << "Not a valid selection, please try again" << std::endl;
        }
    } while (selection != "q" && selection != "Q");
    
    std::cout << "Thanks for listening!" << std::endl;
    std::cout << std::endl;
    return 0;
}