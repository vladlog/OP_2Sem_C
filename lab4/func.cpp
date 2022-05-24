#include "func.h"




void set_sides_T1(double &side_1,double &side_2,double &side_3){
    do {
        cout << "T1:\nEnter the correct size of sides: \n side 1: ";
        cin >> side_1;
        cout << "side 2: ";
        cin >> side_2;
        cout << "side 3: ";
        cin >> side_3;
        cout << endl;
    } while (!if_valid(side_1,side_2,side_3));
}

void set_sides_T2(string &line){
    cout << "T2:\nEnter the sizes of the vertices in one line(like this:v1,v2,v3)\nIn the future program will decrement this values\nso enter the values with this knowledge: ";
    cin.ignore();
    getline(cin, line, '\n');
    int q,w;
    double side_1,side_2,side_3;
    q = line.find(",");
    w = line.find(",",q+1);
    side_1 = stod(line.substr(0,q));
    side_2 = stod(line.substr(q+1,w-q-1));
    side_3 = stod(line.substr(w+1,line.size()-w-1));
    while (!if_valid(side_1,side_2,side_3)){// the program immediately checks the value of the sides by subtracting one from them, due to the fact that in the future these values will be decremented
        //for example,the triangle with values:s1-2;s2-5;s3-6 may exist,but because of decrementation in the future,the sides of the triangle will be equal to 1; 4; 5, respectively. such a triangle cannot exist
        cout << "Enter the correct sizes of the vertices in one line(like this: v1,v2,v3): ";
        cin.clear();
        getline(cin, line, '\n');
        side_1 = stod(line.substr(0,q));
        side_2 = stod(line.substr(q+1,w-q-1));
        side_3 = stod(line.substr(w+1,line.size()-w-1));
    }
}

double max_area(Triangle T1,Triangle T2,Triangle T3,string &flag){
    double max;
    if ((T1.area_of_treangle() >=T2.area_of_treangle()) && (T1.area_of_treangle() >=T3.area_of_treangle())){
        max = T1.area_of_treangle();
        flag = "T1";
    }
    if ((T2.area_of_treangle() >=T1.area_of_treangle()) && (T2.area_of_treangle() >=T3.area_of_treangle())){
        max = T2.area_of_treangle();
        flag = "T2";
    }
    if ((T3.area_of_treangle() >=T2.area_of_treangle()) && (T3.area_of_treangle() >=T1.area_of_treangle())){
        max = T3.area_of_treangle();
        flag = "T3";
    }
    return max;
}

void the_biggest_area(Triangle &T1,Triangle &T2,Triangle &T3){
    string flag;
    double max;
    cout << "The areas:"<<endl;
    cout << "T1: " << T1.area_of_treangle()<<endl;
    cout << "T2: " << T2.area_of_treangle()<<endl;
    cout << "T3: " << T3.area_of_treangle()<<endl<<endl;
    max = max_area(T1,T2,T3,flag);
    cout << "The max area is: " << max << " and it's triangle's " << flag;
}

