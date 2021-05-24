#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>
#include "temp.h"

void temp(int n)//Función que permite que las cartas sean visibles n segundos,
               //y de esta forma no ver las cartas de los contrincantes
{
    int seg=0, min=0;
    while(seg<n){
        seg++;
        if(seg==60){
            seg=0;
            min++;
            if (min==60){
                min=0;
            }
        }
        tiempoespera(1000);
        }

}
void tiempoespera(int milisec) //función que auxiliar de la función temp que fija un tiempo
                               //de espera en milisegundos
{
    int milisecs = clock() * 1000 / CLOCKS_PER_SEC;
    int fin = milisecs + milisec;

    do {
        milisecs = clock() * 1000 / CLOCKS_PER_SEC;
    }
    while (milisecs <= fin);
}
