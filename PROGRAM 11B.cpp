// NAME: YASH SHRIVASTAVA
// PRN: 24070123137
// BATCH: E&TC-B2
// TITLE: CAR DETAILS (FUNCTION INSIDE THE CLASS) (EXPERIMENT: 11B)

// CODE: 

#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string Brand;
    string Model;
    int year;

    void inputDetails() {
        cout << "Enter Car Brand: ";
        cin >> Brand;   
        cout << "Enter Car Model: ";
        cin >> Model;   
        cout << "Enter manufacturing year: ";
        cin >> year;
    }

    void outputDetails() {
        cout << "\nCar Details:" << endl;
        cout << "Brand: " << Brand << endl;
        cout << "Model: " << Model << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
    Car c1;
    c1.inputDetails();     
    c1.outputDetails();   
    return 0;
}

// OUTPUT:

// Enter Car Brand: SKODA
// Enter Car Model: SLAVIA
// Enter manufacturing year: 2025

// Car Details:
// Brand: SKODA
// Model: SLAVIA
// Year: 2025
