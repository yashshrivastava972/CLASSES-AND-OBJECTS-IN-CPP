# Aim: To Study and Implement Classes and Objects.

# Tool: VS CODE.

# Theory: 

•	Object-oriented programming (OOP) is a way of thinking about and organizing code for maximum reusability. 

•	With this type of programming, a program comprises objects that can interact with the user, other objects, or other programs. 

This makes programs more efficient and easier to understand.

•	Programs made with object-oriented programming are well-organized. 

•	Since relative data and functions are grouped in the same object, it is simple to find what you're looking for and understand the code's fundamental purpose. 

•	Developers new to the project or those revisiting code they have not seen in a while can adapt much faster. 

•	When code is divided into manageable pieces this way, you can avoid overwhelmingly large and complicated files. 

<img width="779" height="578" alt="image" src="https://github.com/user-attachments/assets/6447d1e1-3676-4c03-ad72-83ecd77c9936" />

<img width="760" height="568" alt="image" src="https://github.com/user-attachments/assets/8280a381-2092-4f1a-bd1e-217be8f956e6" />

1. Introduction

C++ is an object-oriented programming (OOP) language that allows real-world problems to be represented using classes and objects.
Class → a blueprint or template.
Object → an instance of a class.
This approach improves modularity, reusability, and maintainability of code.

2. Class in C++
A class is a user-defined data type that groups data members (variables) and member functions (methods) into a single unit.
It provides the concept of data abstraction and encapsulation.
Syntax of a Class:

class ClassName {
    // Access specifier
    public:
        // data members
        // member functions
    private:
        // data members
        // member functions
};

3. Object in C++
An object is a variable of a class type.
Each object has its own copy of the data members, but all objects share the same member functions.
Syntax of Object Creation:
ClassName objectName;

4. Example:

#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    int year;

    void display() {
        cout << "Brand: " << brand << ", Year: " << year << endl;
    }
};

int main() {
    Car car1;       // Object 1
    car1.brand = "Toyota";
    car1.year = 2020;
    
    Car car2;       // Object 2
    car2.brand = "Honda";
    car2.year = 2022;

    car1.display();
    car2.display();

    return 0;
}

5. Key Concepts
Encapsulation → binding data and functions together in a single unit (class).
Abstraction → hiding internal details and showing only necessary information.
Access Specifiers:
public: accessible from outside the class.
private: accessible only inside the class.
protected: accessible inside class and derived classes.

6. Advantages of Using Classes & Objects
Organizes code in a modular way.
Reusability (once a class is written, it can be reused).
Increases security with data hiding.
Easy to maintain and scale programs.

Summary:
In C++, classes define the structure, and objects are instances of that structure. Together, they form the backbone of object-oriented programming by implementing real-world entities into programs.

# Algorithms:

1. Algorithm: Student Class & Objects

Step 1: Start

Step 2: Define a class Student with the following public data members:

string name

string branch

string subject

string year

float result

Step 3: In main(), create the first object s1 of class Student.

Assign values to its data members: name, branch, subject, year, result.

Step 4: Create the second object s2 of class Student.

Assign values to its data members: name, branch, subject, year, result.

Step 5: Display the details of s1 by printing all its data members.

Step 6: Display the details of s2 in the same way.

Step 7: End.

2. Algorithm: Car Class and Objects

Step 1: Start

Step 2: Define a class Car with the following public members:

Data Members: Brand, Model, year

Member Functions:

inputDetails() → takes input from the user

outputDetails() → displays the car details

Step 3: In main(), create an object c1 of class Car.

Step 4: Call the function c1.inputDetails() to input brand, model, and year of the car.

Step 5: Call the function c1.outputDetails() to display the entered details.

Step 6: End.

3. Algorithm: Rectangle Class and Area Calculation

Step 1: Start

Step 2: Define a class Rectangle with the following:

Data Members:

length (float)

width (float)

Member Function:

area() → calculates and prints area using formula:

Area = length × width
Area=length×width

Step 3: In main(), create an object r of class Rectangle.

Step 4: Input length and width from the user.

Step 5: Call the function r.area() to calculate and display the area.

Step 6: End.

4. Algorithm: Calculator Class Operations

Step 1: Start

Step 2: Define a class Calculator with the following members:

Data Members:

num1, num2 (float)

Member Functions (inside class):

inputData() → takes input of two numbers

add() → performs addition and prints result

subtract() → performs subtraction and prints result

Step 3: Define two functions outside the class:

multiply(Calculator c) → multiplies num1 and num2

divide(Calculator c) → divides num1 by num2 (if num2 ≠ 0)

Step 4: In main(), create an object c of class Calculator.

Step 5: Call c.inputData() to input two numbers.

Step 6: Perform operations:

Call c.add()

Call c.subtract()

Call multiply(c)

Call divide(c)

Step 7: Display results for all operations.

Step 8: End.

5. Algorithm: Cube Volume Program

Step 1: Start

Step 2: Define a class cube with private data members:

height = 2.0

width = 3.0

length = 5.0

Step 3: Inside the class, define a member function volume() that:

Calculates volume as:

v=height×width×length

Returns the result.

Step 4: In main(), create an object cube1 of class cube.

Step 5: Call cube1.volume() and store the returned value in variable vol.

Step 6: Print the value of vol as the volume of the cube.

Step 7: End.

# Conclusion:

From this experiment, we conclude that:

Classes in C++ act as a blueprint that binds data members (variables) and member functions (methods) into a single unit, ensuring encapsulation.

Objects are instances of a class that allow us to access and manipulate the data defined in the class.

By implementing examples such as Student details, Car details, Rectangle area, Calculator operations, and Cube volume, we observed how real-world entities can be represented in programs.

Classes improve modularity, reusability, and maintainability of code, while objects allow data to be managed efficiently.

Thus, the study of Classes and Objects demonstrates the core concept of Object-Oriented Programming (OOP), making programs more structured and easier to extend.
