#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

/**
 * Swap values
 * @param int a
 * @param int b
 * @return void
 */
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;    
}

/**
 * Read an arbitrary-size array from terminal
 * @param int size Size of the array
 * @return int[] read array
 */
int* read_array(int size)
{
    assert(size > 0);
    
    // Allocate memory for the array
    int *array = malloc(size * sizeof(int));
    int i = 0;
    
    // Read the elements:
    for (i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    
    return array;
}

/**
 * Print the elements of an array
 * @param int* array Pointer to array
 * @param int size Size of the array
 * @return void
 */
void print_array(int* array, int size)
{
    assert(size > 0);
    int i = 0;
    
    for (i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
}

/**
 * Bubble sort for an array
 * @param int* array Pointer to an array
 * @param int size Array's size
 * @return int* array Copied array with elements sorted
 */
int* bubble_sort(const int* array, int size)
{
    assert(size > 0);
    
    // Copy the original array
    int *sorted_array = malloc(size * sizeof(int));
    memcpy(sorted_array, array, size * sizeof(int));
    
    int sorted = 0, i = 0;
    while (sorted == 0) {
        sorted = 1;
        for(i = 0; i < size - 1; i++) {
            if (sorted_array[i+1] < sorted_array[i]) {
                swap(&sorted_array[i], &sorted_array[i+1]);
                sorted = 0;
            }
        }
    }
    
    return sorted_array;
}

/**
 * Selection sort for an array
 * @param int* array Pointer to an array
 * @param int size Array's size
 * @return int* array Copied array with elements sorted
 */
 
int* selection_sort(const int* array, int size)
{
    assert(size > 0);
    
    // Copy the original array
    int *sorted_array = malloc(size * sizeof(int));
    memcpy(sorted_array, array, size * sizeof(int));
    
    int i = 0, j = 0, min_i = 0;
    for (j = 0; j < size - 1; j++) {
        // Finding minimum element from array[j] to array[n]
        
        // Assume first element is the minimum
        min_i = j;
        
        // Compare the minimum with the rest of the array
        for (i = j + 1; i < size; i++) {
            // Mark smaller element as the new minimum
            if (sorted_array[i] < sorted_array[min_i]) {
                min_i = i;
            }
        }
        
        // Swap the minimum with the array[j]
        swap(&sorted_array[j], &sorted_array[min_i]);
    }
    
    return sorted_array;
}
