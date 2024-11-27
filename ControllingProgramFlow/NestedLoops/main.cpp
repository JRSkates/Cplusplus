#include <iostream>
#include <vector>

using namespace std;

int main() {
    cout << "================================================================" << endl;
    cout << endl;

    vector<vector<int>> vector_2d 
    {
        {1, 2, 3},
        {10, 20, 30, 40},
        {100, 200, 300, 400, 500}
    };

    for (auto vec: vector_2d) {
        for (auto val : vec) {
            cout << val << " ";
        }
        cout << endl;
    }

    cout << "Number of rows: " << vector_2d.size() << endl;
    cout << "Number of columns in the first row: " << vector_2d[0].size() << endl;

    cout << "Accessing element at (1, 2): " << vector_2d[1][2] << endl;

    cout << "================================================================" << endl;
    cout << endl;

    for (int num1 {1}; num1 <= 10; ++num1) {
        for(int num2 {1}; num2 <= 10; ++num2) {
            cout << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
        }
        cout << "----------------" << endl;
    }

    cout << "================================================================" << endl;
    cout << endl;

    int num_items {};

    cout << "Enter the number of items: ";
    cin >> num_items;

    vector<int> data{};

    for(int i {1}; i <= num_items; ++i) {
        int data_item {};
        cout << "Enter data item " << i << ": ";
        cin >> data_item;
        data.push_back(data_item);
    }

    cout << "\nDisplaying Histogram..." << endl;
    for (auto val: data) {
        for(int i {1}; i <= val; ++i) {
            if (i % 5 == 0)
                cout << "*";
            else
                cout << "-";
        }
        cout << endl;
    }

    // Enter the number of items: 5
    // Enter data item 1: 25
    // Enter data item 2: 40
    // Enter data item 3: 20
    // Enter data item 4: 34
    // Enter data item 5: 7

    // Displaying Histogram...
    // ----*----*----*----*----*
    // ----*----*----*----*----*----*----*----*
    // ----*----*----*----*
    // ----*----*----*----*----*----*----
    // ----*--


    return 0;
}
