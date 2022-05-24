#include <iostream>
#include <vector>
#include <string>
#include "Arr.h"
using namespace std;

void up_down(int&,int&);
int enter_amount();
vector<Arr> set_vector(const int &amount,const int &down,const int &up);
void output_vector(vector<Arr> &base);
vector<int> min_max(vector<Arr> &base,int &min);
void show_res(vector<int>max_vector,vector<Arr>base,const int &min);
void dell(vector<Arr> base);