#include <iostream>
#include <vector>
#include <string>
using namespace std;

class NumArr{
    int size;
    int* array;
public:
    NumArr();
    NumArr(int arraysize){
        size = arraysize;
    };
    ~NumArr();
};