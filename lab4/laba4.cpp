#include <iostream>
#include <vector>
#include <string>
#include "Triangle.h"
#include "func.h"
using namespace std;


int main() {
    double side_1, side_2, side_3;
    set_sides_T1(side_1, side_2, side_3);
    Triangle T1(side_1, side_2, side_3);
    cout << "Sides of T1: ";T1.print();cout << endl;
    cout << "_______________________________________" << endl;

    string line;
    set_sides_T2(line);
    Triangle T2(line);
    cout << "Sides of T2: ";T2.print();cout << endl;
    cout << "_______________________________________" << endl;

    cout << "T3(Copied from T1):" << endl;
    Triangle T3(T1);
    cout << "Sides of T3: ";T3.print();cout << endl;
    cout << "_______________________________________" << endl;

    cout << "Incremintation of T1:\n";
    ++T1;
    cout << "Sides of T1: ";T1.print();cout << endl;

    cout << "Decremintation of T2:\n";
    --T2;
    cout << "Sides of T2: ";T2.print();cout << endl;

    cout << "Making T3 bigger by adding value:\n";
    double n = 0;
    while(n<=0){
        cout << "Enter correct value(bigger then 0): ";cin >> n;
    }
    T3 += n;
    cout << "Sides of T3: ";T3.print();cout << endl;

    the_biggest_area(T1,T2,T3);
    return 0;
}

