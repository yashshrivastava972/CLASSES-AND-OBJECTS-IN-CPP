// NAME: YASH SHRIVASTAVA
// PRN: 24070123137
// BATCH: E&TC-B2
// TITLE: FUNCTION OUTSIDE THE CLASS (EXPERIMENT: 11C)

// CODE: 

#include <iostream>
using namespace std;

class Rectangle {
public:
    float length;
    float width;

    void area();  
};

void Rectangle::area() {
    float result = length * width;
    cout << "Area of the Rectangle = " << result << endl;
}

int main() {
    Rectangle r;

    cout << "Enter length: ";
    cin >> r.length;
    cout << "Enter width: ";
    cin >> r.width;

    r.area();

    return 0;
}

// OUTPUT:

// Enter length: 50
// Enter width: 40
// Area of the Rectangle = 2000
