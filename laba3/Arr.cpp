//
// Created by Пользователь on 10.05.2022.
//

#include "Arr.h"


Arr::Arr(){
    size = 0;
    arr  = nullptr;
}

Arr::Arr(int size) {
    this->size = size;
}

Arr::~Arr() {
    arr = nullptr;
}

void Arr::fill_vector(int down, int up) {
    srand(rand() * rand() * rand());
    arr = new int[size];
    for (int i = 0;i < size;i++){
        arr[i] = (rand() % (up - down + 1) + down);
    }

}

void Arr::output_vector(){
    cout << "[";
    for(int i = 0;i<size;i++){
        if(i == size-1){
            cout << arr[i] << "]\n";
        } else{
            cout << arr[i] << ",";
        }
    }
}

int Arr::max_el() {
    int max_el = arr[0];
    for(int i = 0;i < size;i++){
        if(arr[i] > max_el){
            max_el = arr[i];
        }
    }
    return max_el;
}

void Arr::arr_del(){
    delete[] arr;
}