#include <iostream>

using namespace std;

int main()
{
    const int rows {3};
    const int cols {4};
    int movie_rating [rows][cols];

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << "Enter the rating for movie " << (i+1) << ", screen " << (j+1) << ": ";
            cin >> movie_rating[i][j];
        }
    }

    return 0;
}