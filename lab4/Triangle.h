#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

bool if_valid(double side_1,double side_2,double side_3);
class Triangle{
    double side_1,side_2,side_3;
public:
    Triangle(double,double,double);
    Triangle(string);
    Triangle(Triangle &tr);
    double get_side_1();
    double get_side_2();
    double get_side_3();

    double area_of_treangle();
    Triangle operator+=(double );
    Triangle operator-=(double );
    Triangle operator++( );
    Triangle operator--( );

    friend bool if_valid(double side_1,double side_2,double side_3);

    void print();

};