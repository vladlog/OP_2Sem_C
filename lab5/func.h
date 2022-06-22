#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include "TIntNumber.h"
using namespace std;

TIntNumber* GenerateRandomBinNumbers(int, int, int);
TIntNumber* GenerateRandomHexNumbers(int, int, int);
void PrintArrayDec(TIntNumber*, int);
void PrintArray(TIntNumber*, int);
int FindTheBiggestDecNumber(TIntNumber*, TIntNumber*, int, int);
vector <string> IndexesOfBiggest(TIntNumber*, TIntNumber*, int, int);
void Increment_Decrement(TIntNumber*, TIntNumber*, int, int);
void input(int&, int&, int&);