#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Declare 2 empty vectors of integers named
    // vector1 and vector2

    vector <int> vector1;
    vector <int> vector2;

    // Add 10 and 20 to vector1 dynamically using .push_back() method
    vector1.push_back(10);
    vector1.push_back(20);

    // Display the elements of vector1 using .at() method and size using .size() method
    cout << "\nvector1: " << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    cout << "Size of vector1: " << vector1.size() << endl;

    // Add 100 and 200 to vector2 dynamically using .push_back() method
    vector2.push_back(100);
    vector2.push_back(200);

    // Display the elements of vector2 using .at() method and size using .size() method
    cout << "\nvector2: " << endl;
    cout << vector2.at(0) << endl;
    cout << vector2.at(1) << endl;
    cout << "Size of vector2: " << vector2.size() << endl;

    // Declare an empty 2D vector called vector_2d
    // Remember that a 2D vector is a vector of vectors

    vector <vector<int>> vector_2d;

    // Add vector1 and vector2 to vector_2d dynamically using.push_back() method
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    // Display the elements of vector_2d using .at() method
    cout << "\nvector_2d: " << endl;
    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;

    // Change vector1.at(0) to 1000
    vector1.at(0) = {1000};

    // Display the elements of vector_2d again using.at() method
    // The change in vector1 is not reflected, as the 2D vector has a COPY of vector1
    cout << "\nAfter changing vector1.at(0): " << endl;
    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;

    return 0;
}