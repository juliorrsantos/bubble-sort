#include "bubble-sort.h"

int bubbleSort(int *vect, int len)
{
    int iteractions = 0;
    int didChanges = false;
    int i = 0;
    int temp = 0;

    do
    {
        didChanges = false;
        for ( i=0; i < len-1; i++)
        {
            if ((vect[i] > vect[i+1]) && (i < len-1))
            {
                temp = vect[i];
                vect[i] = vect[i+1];
                vect[i+1] = temp;
                didChanges = true;
            }
        }
        iteractions++;
        //Uncomment the line below if you want to see every vector iteraction
        //printVect(vect, len);
    }
    while(didChanges);
    return iteractions;
}

void printVect(int *vect, int len)
{
	int i = 0;
    for (i=0; i < len; i++)
    {
        printf("%d  ", vect[i]);
    }
    printf("\n");
}
