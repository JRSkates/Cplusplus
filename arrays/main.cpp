#include <iostream>

using namespace std;

int main()
{
    // element_type variable_name [constant number of elements] {init list}
    int test_scores[5]{100, 95, 99, 87, 88};

    // Accessing an element of the array by index
    cout << "First score at index 0: " << test_scores[0] << endl;

    // Print all elements of the array
    for (int i = 0; i < 5; i++)
    {
        cout << "Test score " << i + 1 << ": " << test_scores[i] << endl;
    }

    int high_score_per_level[10]{3, 5}; // init to 3, 5 and remaining elements to 0

    const int days_in_year{365};
    double high_temperatures[days_in_year]{0}; // init 365 array elements, init all to zero

    int another_array[]{1, 2, 3, 4, 5}; // size automatically calculated

    cout << "==================================================" << endl;

    char vowels[]{'a', 'e', 'i', 'o', 'u'};
    cout << "The first vowel is: " << vowels[0] << endl;
    cout << "The last vowel is: " << vowels[4] << endl;

    cout << "==================================================" << endl;

    double hi_temps[] {90.1, 89.8, 77.5, 81.6};
    cout << "Highest temperature on the first day: " << hi_temps[0] << "°F" << endl;
    cout << "Highest temperature on the last day: " << hi_temps[3] << "°F" << endl;

    hi_temps[0] = {100.7};

    cout << "Highest temperature on the first day after update: " << hi_temps[0] << "°F" << endl;

    cout << "==================================================" << endl;

    int array_empty [5] {};
    cout << array_empty[0] << endl;
    cout << "\nNotice what the value of the array name is: " << array_empty << endl;
    cout << "This is the location/reference of the array" << endl;

    return 0;
}