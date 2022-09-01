//
// Created by felipe on 23/08/22.
//

#include "Ss.h"
#include <iostream>
#include <iostream>
using namespace std;

// function to swap the the position of two elements
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// function to print an array
void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

void SS(int array[], int size) {
    for (int step = 0; step < size - 1; step++) {
        int min_idx = step;
        for (int i = step + 1; i < size; i++) {


            if (array[i] < array[min_idx])
                min_idx = i;
        }


        swap(&array[min_idx], &array[step]);
    }
}

