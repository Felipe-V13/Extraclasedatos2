#include <iostream>
#include<stdio.h>
void QS (int L[], int ini, int fin);
void prt_array (int array[], int size);
void IS(int array[], int size);
void swap(int *a, int *b);
void SS(int array[], int size);
void printArray(int array[], int size);





int main (int argc, char *argv[]){
    int i;
    int L[10];
    for (int j=0; j<10; j++)
    {
        std::cin>> L[j];
    }
    QS(L, 0, 9);
    int size = sizeof (L) / sizeof(L[0]);
    IS(L, size);
    prt_array (L, size);

    //aca terma IS
    //inicia SS

    SS(L, size);
    printArray(L, size);

    //ytermina SS
    for (i=0; i<10; i++){
        printf("%d\t", L[i]);

    }
    return 0;
}


