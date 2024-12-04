#include <iostream>
#include <string>

using namespace std;
// Deep copies 
// Sufficient when the class contains only non-pointer members.
// Works out of the box for types like std::string and primitive types (int, double, etc.).


// Deep copies
// Necessary when dealing with pointer members or dynamically allocated resources.
// Ensures that each object has its own independent copy of the resource.

// below is an example of a class with a pointer parameter
// we need to use deep copying here
// if we didn't we would only copy the pointer location rather than the data
class Deep {
private:
    int *data; // Pointer to dynamically allocated memory
public:
    void set_data_value(int d) { *data = d; }
    int get_data_value() const { return *data; }
    
    // Constructors
    Deep(); // Default constructor
    Deep(int d); // Parameterized constructor
    Deep(const Deep& other); // Copy constructor
    
    // Destructor
    ~Deep();
};

// Default constructor
Deep::Deep(){ 
    data = new int{0};
    cout << "Default constructor called" << endl;
}

// Parameterized constructor
Deep::Deep(int d) {
    data = new int{d};  // Dynamically allocates memory and assigns it to data.
    cout << "Parameterized constructor called" << endl;
}

// Copy constructor (deep copy)
Deep::Deep(const Deep& other) : Deep{*other.data} {
    cout << "Copy constructor called (deep copy)" << endl;
}

// Destructor
Deep::~Deep() {
    delete data;
    cout << "Destructor called" << endl;
}

void display_deep(const Deep &obj) {
    cout << "Data value: " << obj.get_data_value() << endl;
}

int main () {
    // Allocates memory for obj1.data and sets its value to 10.
    Deep obj1{10}; // Parameterized constructor
    display_deep(obj1);
    
    // Allocates new memory for obj2.data and copies the value from obj1.data (deep copy)
    Deep obj2{obj1}; // Copy constructor
    display_deep(obj2);

    // Modifies the value pointed to by obj2.data to 20. 
    // This does not affect obj1.data because of the deep copy.
    obj2.set_data_value(20); // Modify obj2
    cout << "After modification:" << endl;
    display_deep(obj1); // Verify obj1 is not affected
    display_deep(obj2);

    return 0;
}
