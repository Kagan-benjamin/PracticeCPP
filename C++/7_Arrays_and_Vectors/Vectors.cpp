#include <iostream>
#include <vector> 
using namespace std;

int main() {
    vector <char> vowels; // empty
    vector <char> vowels_1 (5); // 5 el long, init to 0
    vector <char> vowels_2 {'a','e','i','o','u'};
    
//    cout << "vowels: " << vowels[0] << endl; // crashes
//    cout << "vowels_1: " << vowels_1[0] << endl; // empty result
    cout << "vowels_2: " << vowels_2[0] << endl;
    
    vector <int> test_scores (3); // 3 el long, init to 0
    vector <int> test_scores_1 (3, 100); // 3 el long, init to 100
    vector <int> test_scores_2 {98, 100, 89}; // direct init
    
    cout << "\nTest scores using array syntax:" << endl;
    cout << "test_scores: " << test_scores[0] << endl;
    cout << "test_scores_1: " << test_scores_1[0] << endl;
    cout << "test_scores_2: " << test_scores_2[0] << endl;
    
    cout << "\nTest scores using vector syntax:" << endl;
    cout << test_scores_2.at(0) << endl;
    cout << test_scores_2.at(1) << endl;
    cout << test_scores_2.at(2) << endl; 
    
    cout << "\nThere are " << test_scores_2.size() << " scores in the vector." << endl;
    
    cout << "\nPlease enter 3 test scores: ";
    cin >> test_scores_2.at(0);
    cin >> test_scores_2.at(1);
    cin >> test_scores_2.at(2);
    
    cout << "\nUpdated test scores: " << endl;
    cout << test_scores_2.at(0) << endl;
    cout << test_scores_2.at(1) << endl;
    cout << test_scores_2.at(2) << endl;
    
    cout << "\nEnter a test score to add to the vector: ";
    int score_to_add {0};
    cin >> score_to_add;
    test_scores_2.push_back(score_to_add);
    cout << "\nEnter 1 more test score to add to the vector: ";
    cin >> score_to_add;
    test_scores_2.push_back(score_to_add);
    
    cout << "\nTest scores are now: " << endl;
    cout << test_scores_2.at(0) << endl;
    cout << test_scores_2.at(1) << endl;
    cout << test_scores_2.at(2) << endl;
    cout << test_scores_2.at(3) << endl;
    cout << test_scores_2.at(4) << endl;    
    
    cout << "\nThere are now: " << test_scores_2.size() << " scores in the vector." << endl;
    
//    cout << "\nThis should cause an exception!" << test_scores_2.at(10) << endl;

    // 2-D Vector:
    vector <vector <int>> movie_ratings
    {
        {1,2,3,4},
        {2,3,3,4},
        {1,3,5,4}
    };
    
    cout << "Here are the reviews for reviewer 1: " << endl;
    cout << movie_ratings.at(0).at(0) << endl;
    cout << movie_ratings.at(0).at(1) << endl;
    cout << movie_ratings.at(0).at(2) << endl;
    cout << movie_ratings.at(0).at(3) << endl;
    return 0;
}