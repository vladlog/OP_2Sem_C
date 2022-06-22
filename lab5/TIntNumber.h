#pragma once
#include <iostream>
#include <vector>
#include <string>

using namespace std;
class TIntNumber {
    string number;
    int base;
public:
    void set_number(string);
    void set_base(int);

    string get_number(){return number;}
    int get_base(){return base;}

    virtual void operator++() = 0;
    virtual void operator--() = 0;

    int ToDecimal();

    void print();
};
class TIntNumber2 :public TIntNumber {
public:
    TIntNumber2();
    TIntNumber2(string);
    string ToBin(int);
    void operator++() override;
    void operator--() override;

};

class TIntNumber16 :public TIntNumber {
public:
    TIntNumber16();
    TIntNumber16(string);
    string ToHex(int);
    void operator--() override;
    void operator++() override;

};


