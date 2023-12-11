#ifndef BUBBLE_SORT_H
#define BUBBLE_SORT_H

#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0

/**
 * @brief Sorts an array of integers in ascending order using the Bubble Sort algorithm.
 *
 * This function takes a pointer to an array of integers and its length, then sorts
 * the array in ascending order using the Bubble Sort algorithm. The function returns
 * the number of iterations required to sort the array.
 *
 * @param vect A pointer to the array of integers to be sorted.
 * @param len The length of the array.
 * @return The number of iterations required to sort the array.
 *
 * @note The sorting is performed in-place.
 * @see printVect() Function to print the array.
 */
int bubbleSort(int *vect, int len);

/**
 * @brief Prints the elements of an integer array.
 *
 * This function takes an integer array and its length as input and prints
 * each element of the array followed by two spaces. The elements are separated
 * by spaces, and a newline character is printed at the end.
 *
 * @param vect Pointer to the integer array.
 * @param len  Length of the integer array.
 *
 * @return void
 */
void printVect(int *vect, int len);

#endif /* BUBBLE_SORT_H */

