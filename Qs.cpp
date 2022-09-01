//
// Created by felipe on 22/08/22.
//
#include<stdio.h>
#include "Qs.h"


void QS (int L[], int ini, int fin){
    int piv, izq, der, med;

    if (ini<fin){
        piv =L[ini];
        izq=ini;


        der=fin;
        while(izq<der){
            while (der>izq and L[der]>piv)
                der--;

            if (der>izq) {
                L[izq] = L[der];
                izq++;
            }

            while (izq<der and L[izq]<L[piv])
                izq++;
            if(izq<der){
                L[der]=L[izq];
                der--;
            }
        }
        //pivot con la posicion
        L[der]=piv;
        med=der;


        //llamada r4ecursiva

        QS(L, ini, med-1);
        QS(L, med+1, fin);



    }


}