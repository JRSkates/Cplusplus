#include <iostream>
#include <climits>
#include <cfloat>

using namespace std;

int main(){
    // We are using list declarations {}
    // List initialization in C++ is a modern, concise way to initialize variables, arrays, and objects using curly braces {}.
    // It was introduced in C++11 to make initialization safer and more expressive 
    // while addressing potential pitfalls with traditional initialization methods (like narrowing conversions).

    // Character type
    char middle_initial {'J'};
    cout << "My middle initial is " << middle_initial << endl;

    // Integer types
    unsigned short int exam_score {55};
    cout << "My exam score is " << exam_score << endl;

    int countries_represented {65};
    cout << "I represent " << countries_represented << " countries." << endl;

    long people_in_florida {20610000};
    cout << "Florida has " << people_in_florida << " people." << endl;

    long long people_on_earth {8000000000}; 
    cout << "The Earth has " << people_on_earth << " people." << endl;

    // Floating-point types
    float average_grade {85.5};
    cout << "My average grade is " << average_grade << endl;

    double pi {3.14159};
    cout << "Pi is approximately " << pi << endl;

    long double large_amount {2.7e120};
    cout << "A large amount is " << large_amount << endl;

    cout << sizeof(large_amount) << endl;

    // String type
    string name {"John Doe"};
    cout << "My name is " << name << endl;

    // Boolean type
    bool is_tall {true};
    cout << "I am tall: " << (is_tall? "Yes" : "No") << endl;

    
    cout << "========================================" << endl;

    // sizeof type, shows the size of the type in bytes
    cout << "Size of information" << endl;
    cout << "char: " << sizeof(char) << " bytes" << endl;
    cout << "short int: " << sizeof(short int) << " bytes" << endl;
    cout << "int: " << sizeof(int) << " bytes" << endl;
    cout << "long int: " << sizeof(long int) << " bytes" << endl;
    cout << "float: " << sizeof(float) << " bytes" << endl;

    cout << "========================================" << endl;

    cout << "Minimum values with <climits>" << endl;
    cout << "char: " << CHAR_MIN << endl;
    cout << "short int: " << SHRT_MIN << endl;
    cout << "int: " << INT_MIN << endl;
    cout << "long int: " << LONG_MIN << endl;
    cout << "float: " << FLT_MIN << endl;

    cout << "========================================" << endl;

    cout << "Maximum values with <climits>" << endl;
    cout << "char: " << CHAR_MAX << endl;
    cout << "short int: " << SHRT_MAX << endl;
    cout << "int: " << INT_MAX << endl;
    cout << "long int: " << LONG_MAX << endl;
    cout << "float: " << FLT_MAX << endl;

    cout << "========================================" << endl;
    cout << "Size of information using variable names" << endl;
    cout << "Size of middle_initial: " << sizeof(middle_initial) << " bytes" << endl;
    cout << "Size of exam_score: " << sizeof(exam_score) << " bytes" << endl;
    cout << "Size of countries_represented: " << sizeof(countries_represented) << " bytes" << endl;
    cout << "Size of people_in_florida: " << sizeof(people_in_florida) << "bytes" << endl;
    cout << "Size of people_on_earth: " << sizeof(people_on_earth) << " bytes" << endl;
    cout << "Size of average_grade: " << sizeof(average_grade) << " bytes" << endl;
    cout << "Size of pi: " << sizeof(pi) << " bytes" << endl;
    cout << "Size of large_amount: " << sizeof(large_amount) << " bytes" << endl;


    return 0;
}