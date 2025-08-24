// NAME: YASH SHRIVASTAVA
// PRN: 24070123137
// BATCH: E&TC-B2
// TITLE: SIMPLE CALCULATOR (FOR ADDITION & SUBTRACTION - INSIDE AND MULTIPLICATION & DIVISION - OUTSIDE THE CLASS) (EXPERIMENT: 11D)

// CODE: 

#include <iostream>
using namespace std;

class Calculator {
public:
    float num1, num2;
    
    void inputData() {
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
    }

    void add() {
        cout << "Addition = " << (num1 + num2) << endl;
    }

    void subtract() {
        cout << "Subtraction = " << (num1 - num2) << endl;
    }
};

void multiply(Calculator c) {
    cout << "Multiplication = " << (c.num1 * c.num2) << endl;
}

void divide(Calculator c) {
    if (c.num2 != 0)
        cout << "Division = " << (c.num1 / c.num2) << endl;
    else
        cout << "Error! Division by zero not allowed." << endl;
}

int main() {
    Calculator c;

    c.inputData();
    c.add();
    c.subtract();

    multiply(c);
    divide(c);

    return 0;
}

// OUTPUT:

// Enter two numbers: 4
// 8
// Addition = 12
// Subtraction = -4
// Multiplication = 32
// Division = 0.5

// Enter two numbers: 4
// 0
// Addition = 4
// Subtraction = 4
// Multiplication = 0
// Error! Division by zero not allowed.
