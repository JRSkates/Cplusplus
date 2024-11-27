#include <iostream>
#include <vector>

using namespace std;

int main() {
    cout << "================================================================" << endl;
    cout << endl;

    // for (initialization; condition; increment) {
    //     statement(s);
    // }

    for (int i {1}; i <= 5; ++i) {
        cout << "Number: " << i << endl;
    }
    // Number: 1
    // Number: 2
    // Number: 3
    // Number: 4
    // Number: 5
    cout << endl;

    for (int i {1}, j {5}; i <= 5; ++i, ++j) {
        cout << i << " * " << j << " = " << (i * j) << endl;
    }
    // 1 * 5 = 5
    // 2 * 6 = 12
    // 3 * 7 = 21
    // 4 * 8 = 32
    // 5 * 9 = 45

    for(int i {1}; i <= 100; ++i) {
        cout << i << ((i % 10 == 0) ? "\n" : " ");
    }

    cout << endl;
    cout << "================================================================" << endl;
    cout << endl;

    cout << "Ranged Based For Loop" << endl;
    
    vector <int> scores {100, 90, 97};

    for (auto score : scores) {
        cout << "Score: " << score << endl;
    }
    // Score: 100
    // Score: 90
    // Score: 97

    vector <double> temps {87.2, 77.1, 80.0, 72.5};

    double average_temp {};
    double running_sum {};

    for (auto temp : temps) 
        running_sum += temp;
    
    if (temps.size() != 0) 
        average_temp = running_sum / temps.size();

    cout << "Average Temperature: " << average_temp << endl;
    // Average Temperature: 79.2

    cout << "================================================================" << endl;
    cout << endl;

    return 0;
}