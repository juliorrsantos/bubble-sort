#include <stdio.h>
#include <stdlib.h>

#include "bubble-sort.h"

int vect[] = {3, 9, 2, 0, 28, 4, 19, 7, 5, 3, 42, 56, 0, 1, 1, 2, 7, 9, 16, 2};

int main()
{
    printVect(vect, sizeof(vect)/sizeof(int));
    int iteractions = bubbleSort(vect, sizeof(vect)/sizeof(int));
    printVect(vect, sizeof(vect)/sizeof(int));

    printf(" %d iteractions was necessary to sort the vector of %d elements.", iteractions, sizeof(vect)/sizeof(int));
}
