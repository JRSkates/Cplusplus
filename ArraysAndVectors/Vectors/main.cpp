#include <iostream>
#include <vector>

using namespace std;

int main() {
    // A vector is an array that can grow and shrink in size at execution time
    // Provides similar functionality, semantics and syntax as arrays
    // Very efficient
    // Can provide bounds checking
    // Can use lots of cool functions like sort, reverse, find and more


    // vector <char> vowels  // empty 
    // vector <char> vowels(5)  // 5 initialized to zero
    vector <char> vowels {'a', 'e', 'i', 'o', 'u'};

    // Accessing elements with .at() method
    cout << "The first vowel is: " << vowels.at(0) << endl;

    // Adding elements with .push_back() method
    vowels.push_back('A');
    vowels.push_back('E');
    vowels.push_back('I');
    vowels.push_back('O');
    vowels.push_back('U');

    // Printing all elements with a for loop
    for( const char& vowel : vowels ) {
        cout << vowel << " ";
    }
    cout << endl;

    // vector <int> test_scores (3)   // 3 elements all initialized to zero
    // vector <int> test_scores (3, 100)   // 3 elements all initialized to 100
    vector <int> test_scores(1);
    cout << "\nEnter the first score to add to the test scores: " << endl;

    cin >> test_scores.at(0);
    cout << "The first score is: " << test_scores.at(0) << endl;

    test_scores.push_back(95);
    test_scores.push_back(99);
    test_scores.push_back(87);

    cout << "\nEnter the score to add to the test scores: " << endl;
    int new_score;
    cin >> new_score;

    test_scores.push_back(new_score);

    cout << "\nFull test scores: " << endl;
    for( const int& test_score : test_scores ) {
        cout << test_score << " " << endl;
    }

    cout << "\nThere are " << test_scores.size() << " test scores" << endl;

    return 0;
}