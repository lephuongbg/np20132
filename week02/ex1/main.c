#include <stdio.h>
#include "array.h"

int main(int argc, char *argv[])
{
    int size = 0;
    int *array = NULL, *bubble_sorted_array = NULL, *selection_sorted_array = NULL;
    
    // Read the number of elements
    printf("Number of elements: ");
    scanf("%d", &size);
    
    // Read the elements
    array = read_array(size);
    
    // Bubble sort
    printf("Sorting by bubble sort...\n");
    bubble_sorted_array = bubble_sort(array, size);
    print_array(bubble_sorted_array, size);
    printf("\n");
    
    // Selection sort
    printf("Sorting by selection sort...\n");
    selection_sorted_array = selection_sort(array, size);
    print_array(selection_sorted_array, size);
    printf("\n");
     
    return 0;
}
