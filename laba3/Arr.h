#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <ctime>
using namespace std;

class Arr{
    int size;
    int * arr;
public:
    Arr();
    Arr(int);
    ~Arr();
    void fill_vector(int,int);
    void output_vector();
    int max_el();
    void arr_del();
};