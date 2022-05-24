
#include "Triangle.h"

Triangle::Triangle(double side_1,double side_2,double side_3){
    this->side_1 = side_1;
    this->side_2 = side_2;
    this->side_3 = side_3;
}

Triangle::Triangle(string line){
    int q,w;
    q = line.find(",");
    w = line.find(",",q+1);
    side_1 = stod(line.substr(0,q));
    side_2 = stod(line.substr(q+1,w-q-1));
    side_3 = stod(line.substr(w+1,line.size()-w-1));
}

Triangle::Triangle(Triangle &tr){
    this-> side_1 = tr.side_1;
    this-> side_2 = tr.side_2;
    this-> side_3 = tr.side_3;
}

double Triangle::get_side_1(){
    return this->side_1;
}

double Triangle::get_side_2(){
    return this->side_2;
}

double Triangle::get_side_3(){
    return this->side_3;
}

bool if_valid(double side_1,double side_2,double side_3){
    if((side_1 + side_2 <= side_3) || (side_3 + side_2 <= side_1) || (side_1 + side_3 <= side_2) || (side_1 <=0) || (side_2 <=0) || (side_3 <=0)){
        return false;
    }
    return true;
}

double Triangle::area_of_treangle(){
    double p = ((side_1 + side_2 + side_3)/2);
    double area = sqrt(p*(p-side_1)*(p-side_2)*(p-side_3));
    return area;
}

Triangle Triangle::operator+=(double num){
    this->side_1+=num;
    this->side_2+=num;
    this->side_3+=num;
    return *this;
}

Triangle Triangle::operator-=(double num){
    this->side_1-=num;
    this->side_2-=num;
    this->side_3-=num;
    return *this;
}

Triangle Triangle::operator++(){
    this->side_1++;
    this->side_2++;
    this->side_3++;
    return *this;
}

Triangle Triangle::operator--(){
    if(if_valid(side_1-1,side_2-1,side_3-1)){
        this->side_1--;
        this->side_2--;
        this->side_3--;
    } else{
        cout << "Triangle cannot exist after decrementation.The function will return the original parameters of the triangle\n";
        this->side_1;
        this->side_2;
        this->side_3;
    }
    return *this;
}

void Triangle::print(){
    cout << "s1 = " << side_1 << ",s2 = " << side_2 << ",s3 = " << side_3;
}

