#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include "Triangle.h"
using namespace std;


void set_sides_T1(double &side_1,double &side_2,double &side_3);
void set_sides_T2(string &line);
double max_area(Triangle T1,Triangle T2,Triangle T3,string &flag);
void the_biggest_area(Triangle &T1,Triangle &T2,Triangle &T3);
