// NAME: YASH SHRIVASTAVA
// PRN: 24070123137
// BATCH: E&TC-B2
// TITLE: USE OF PUBLIC & PRIVATE VARIABLES IN CLASS (VOLUME OF A CUBE WITH METHOD INSIDE CLASS & OUTSIDE THE CLASS) (EXPERIMENT: 11E)

// CODE: 
#include <iostream>
using namespace std;

class cube {
    double height = 2.0;
    double width = 3.0;
    double length = 5.0;

public:
    double volume() {
        double v;
        v = height * width * length;
        return v;
    }
};

int main() {
    cube cube1;
    double vol = cube1.volume();
    cout << "Volume: " << vol << endl;
    return 0;
}

// OUTPUT:

// Volume: 30
