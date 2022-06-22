#include "TIntNumber.h"

void TIntNumber::print() {
    cout << this->number << "  ";
}
void TIntNumber::set_base(int value) {
    this->base = value;
}
void TIntNumber::set_number(string line) {
    this->number = line;
}
TIntNumber2::TIntNumber2() {
    this->set_number("");
    this->set_base(2);
}
TIntNumber16::TIntNumber16(){
    this->set_number("");
    this->set_base(16);
}
string TIntNumber16::ToHex(int num)
{
    string str;
    int temp = (num <= 0 ? (-num) : num);
    while (temp != 0) {
        str = (((temp % 16) < 10) ? char(temp % 16 + 48) : char(temp % 16 + 55)) + str; temp /= 16;
    }
    if (num < 0)
        str = "-" + str;
    if (num == 0)
        str = "0";
    return str;
}
string TIntNumber2::ToBin(int num) {
    int temp = num;
    string r = "";
    while (num != 0)
    {
        r = (num % 2 == 0 ? "0" : "1") + r; num /= 2;
    }
    if (temp < 0)
        r = "-" + r;
    if (temp == 0)
        r = "0";
    return r;
}
TIntNumber2::TIntNumber2(string num) {
    this->set_number(num);
    this->set_base(2);
}
TIntNumber16::TIntNumber16(string num) {
    this->set_number(num);
    this->set_base(16);
}
void TIntNumber16::operator--() {
    int new_number = ToDecimal();
    new_number--;
    this->set_number(ToHex(new_number));
}
void TIntNumber16::operator++() {
    int new_number = ToDecimal();
    new_number++;
    this->set_number(ToHex(new_number));
}
void TIntNumber2::operator++() {
    int new_number = ToDecimal();
    new_number++;
    this->set_number(ToBin(new_number));
}
void TIntNumber2::operator--() {
    int new_number = ToDecimal();
    new_number--;
    this->set_number(ToBin(new_number));
}

int TIntNumber::ToDecimal() {
    int new_number = stoi(number, nullptr, base);
    return new_number;
}