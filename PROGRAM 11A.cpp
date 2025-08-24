// NAME: YASH SHRIVASTAVA
// PRN: 24070123137
// BATCH: E&TC-B2
// TITLE: STUDENT INFORMATION (CREATION OF MULTI-OBJECTS CLASS) (EXPERIMENT: 11A)

// CODE: 

#include <iostream>
#include <string>
using namespace std;

class Student {
public:     
    string name;
    string branch;
    string subject;
    string year;
    float result;
};

int main() {
    Student s1;
    s1.name = "YASH SHRIVASTAVA";
    s1.branch = "E&TC";
    s1.subject = "C++";
    s1.year = "2nd"; 
    s1.result = 9.6;
    
    Student s2;
    s2.name = "NAMAN SHRIVASTAVA";
    s2.branch = "E&TC";
    s2.subject = "C++";
    s2.year = "2nd"; 
    s2.result = 8.6;


    cout << "Student 1 Details:" << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Branch: " << s1.branch << endl;
    cout << "Subject: " << s1.subject << endl;
    cout << "Year: " << s1.year << endl;
    cout << "Result: " << s1.result << endl;
    cout << endl; 
    cout << "Student 2 Details:" << endl;
    cout << "Name: " << s2.name << endl;
    cout << "Branch: " << s2.branch << endl;
    cout << "Subject: " << s2.subject << endl;
    cout << "Year: " << s2.year << endl;
    cout << "Result: " << s2.result << endl;

    return 0;
}

// OUTPUT:

// Student 1 Details:
// Name: YASH SHRIVASTAVA
// Branch: E&TC
// Subject: C++
// Year: 2nd
// Result: 9.6

// Student 2 Details:
// Name: NAMAN SHRIVASTAVA
// Branch: E&TC
// Subject: C++
// Year: 2nd
// Result: 8.6
