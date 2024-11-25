#include <iostream>
#include <vector>
#include <string>

// Groups code entities into a namespace scope
// This allows "cout" instead of "std::cout"
// Typically in bigger projects, we wouldnt want this
// As it could create conflicts with other naming conventions
using namespace std;

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
    return 0;
}
