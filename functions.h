//
// Created by palma on 8/30/2023.
//
#ifndef INTRODUCTION_FUNCTIONS_H
#define INTRODUCTION_FUNCTIONS_H

/**
 * Prints the elements of the array to the standard output
 *
 * @param n - The length of the array
 * @param array - The array storing elements
 */
void printArray(int n, int *array);

/**
 * Finds the minimum value in an integer array.
 *
 * @param n - The length of the array
 * @param array - The array storing elements
 * @return The minimum value found in the array
 */
int minimumOfArray(int n, int *array);

/**
 * Swaps the values of two double variables.
 *
 * @param number1 - Pointer to the first double variable
 * @param number2 - Pointer to the second double variable
 */
void swap(double *number1, double *number2);

/**
 * Finds the minimum value in an array and calculates the number of comparisons made.
 *
 * @param n - The length of the array
 * @param array - The array storing elements
 * @param comparisons - Pointer to a variable counting the number of comparisons
 * @return The minimum value found in the array
 */
int minimumOfArrayNrOfComparisons(int n, int *array, int *comparisons);

/**
 * Finds and returns an array of maximum values for each row in a matrix.
 *
 * @param rows - The number of rows in the matrix
 * @param columns - The number of columns in the matrix
 * @param matrix - The matrix storing elements
 * @return An array containing the maximum element of each row
 */
float* maxOfRowsInMatrix(int rows, int columns, float **matrix);


#endif //INTRODUCTION_FUNCTIONS_H
