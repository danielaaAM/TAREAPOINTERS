//
// Created by Josean Camarena on 07/07/22.
// Implemented by: $STUDENT$
//

#include "pointers.h"

int bubble_sort(int *collection, int count)
{
    printf("BUBBLE\n");
    int a, b, c;
    int contador = 0;

    for (a = 0; a < count; a++) {
        for (b = a + 1; b < count; b++) {
            if (*(collection + b) < *(collection + a)) {

                c = *(collection + a);
                *(collection + a) = *(collection + b);
                *(collection + b) = c;
                contador++;
            }
        }
    }
    for (a = 0; a < count; a++)
        printf("%d ", *(collection + a));

    printf("\nNumero de intercambios necesarios: \n%d", contador);
    return 0;
}


void insertion_sort(int *collection, int count)
{
    printf("\nINSERTION\n");
    int a, b, c;
    int contador = 0;

    for (a = 1; a < count; a++){
        c = collection[a];
        for (b = a; b > 0 && collection[b-1] > c; b--){
            collection[b] = collection[b-1];
        }
        collection[b] = c;
        contador++;

    }
    for (a = 0; a < count; a++)
        printf("%d ", *(collection + a));

    printf("\nNumero de intercambios necesarios: \n%d", contador);
}


void reverse(int *collection, int count)
{
    printf("\nREVERSE\n");
    int a, b, c;
    for (a = 0, b = count-1; a < b; a++, b--){
        c = *(collection+a);
        *(collection+a)= *(collection+b);
        *(collection+b) = c;
    }
    for (a=0; a < count; a++){
        printf("%d ", *(collection +a));
    }

}

int calulate_frequency(int *collection, int count, int target)
{
    printf("\nFREQUENCY\n");
    int a, b;
    int fr[count];
    int visited = -1;

    for (a = 0; a < count; a++) {
        target = 1;
        for(b = a + 1; b < count; b++){
            if (*(collection+a)== (*(collection+b))){
                target++;
                fr[b]= visited;
            }
        }
        if (fr[a]!=visited){
            fr[a]= target;
        }

    }
    printf(" Element | Frequency\n");
    for (a = 0; a < count; a++){
        if(fr[a]!=visited){
            printf("     %d", *(collection+a));
            printf("    |  ");
            printf("  %d\n", fr[a]);
        }
    }
  return 0;
    /*
 * MANERA MÁS SENCILLA FREQUENCY
 * int a, b=0;
 * for (a=0; a<count; a++){
 *      if(+(collection + i) == target){
 *          b++
 *      }
 *  }
 *  printf("elemento: %d frequencia %d", target, b);
 *  return 0;
 */


