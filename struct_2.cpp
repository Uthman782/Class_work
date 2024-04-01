#include <iostream>
using namespace std;

// Define a structure named Point
struct Employee {
    string name;
    int age;
};
int main() {
    // Declare a variable of type Point
    Employee p1;
    // Access and assign values to its members
    p1.name = "Asad";
    p1.age = 20;
    // Access and print the values
    cout << "Name: " << p1.name << "\t Age: " << p1.age;
    return 0;
}


// Define a structure named Point
struct Point {
    int x;
    int y;
};
int main() {
    // Declare a variable of type Point
    Point p1;
    // Access and assign values to its members
    p1.x = 10;
    p1.y = 20;
    // Access and print the values
    cout << "Coordinates: (" << p1.x << ", " << p1.y << ")\n";
    return 0;
}



// ........................OUTPUT....................

// Name: Asad      Age: 20




