//
// Created by Пользователь on 10.05.2022.
//

#include "func.h"


void up_down(int &down,int &up){
    cout << "Enter down limit (an integer): ";
    cin >> down;
    while(cin.fail()){
        cin.clear();
        cin.ignore(INT_MAX,'\n');
        cout << "Enter correct number: ";
        cin >> down;
    }
    cout << "Enter upper limit (bigger then down limit): ";
    cin >> up;
    while(cin.fail() || (up < down)){
        cin.clear();
        cin.ignore(INT_MAX,'\n');
        cout << "Enter correct number: ";
        cin >> up;
    }
}

int enter_amount(){
    int amount;
    cout << "Enter amount of array's (integer > 0): ";
    cin >> amount;
    while(cin.fail() || (amount <= 0)){
        cin.clear();
        cin.ignore(INT_MAX,'\n');
        cout << "Enter correct number: ";
        cin >> amount;
    }
    return amount;
}

vector<Arr> set_vector(const int &amount,const int &down,const int &up){
    vector <Arr> temp;
    int size;
    for(int i = 0;i < amount;i++){
        cout << "Enter Size of array Nom" <<i+1<< ":";cin >> size;
        while(cin.fail() || (size <= 0)){
            cin.clear();
            cin.ignore(INT_MAX,'\n');
            cout << "Enter correct number: ";
            cin >> size;
        }
        Arr vec(size);
        vec.fill_vector(down,up);
        temp.push_back(vec);
    }
    return temp;
}

void output_vector(vector<Arr> &base){
    for(int i = 0;i < base.size();i++){
        cout << "Array Nom(" << i+1 << ")\n";
        base[i].output_vector();
        cout << "Max elem: " << base[i].max_el() << endl;
        cout << endl;
    }
}


vector<int> min_max(vector<Arr> &base,int &min){
    vector<int> max_elem;
    int max;
    for (int i = 0;i < base.size();i++){
        max = base[i].max_el();
        max_elem.push_back(max);
    }
    min = max_elem[0];
    for (int i = 0;i < max_elem.size();i++){
        if(min > max_elem[i]){
            min = max_elem[i];
        }
    }
    return max_elem;
}


void show_res(vector<int>max_vector,vector<Arr>base,const int &min){
    cout << "The minimal max element out of all of them: " << min << endl << endl;
    cout << "The array/s with the max element " << min << ":" << endl;
    for(int i = 0;i < max_vector.size();i++){
        if(min == max_vector[i]){
            cout << "Array Nom("<<i+1<<": ";
            base[i].output_vector();
            cout << endl;
        }
    }
}

void dell(vector<Arr> base){
    for (int i = 0;i < base.size();i++){
        base[i].arr_del();
    }
}