//
// Created by felipe on 22/08/22.
//
#include <iostream>
#include<stdio.h>
using namespace std;

#include "Is.h"
void prt_array (int array[], int size){
    for (int i =0; i < size; i++){
        cout << array[i] <<" ";
    }
    cout << endl;
}
void IS(int array[], int size) {
    for (int step = 1; step < size; step++){
        int key = array[step];
        int j = step - 1;
        while (key < array[j] and j >= 0) {
            array[j + 1] = array[j];
            --j;
            }

        }
    }


