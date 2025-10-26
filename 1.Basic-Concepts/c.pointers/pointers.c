#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Defining a pointer - Accessing memory locations of values defined in the stack
    int a = 50;
    int *aPtr = &a; // Pointer declaration & initialization

    // Pointer dereferencing
    *aPtr = 100;
    printf("a : %d ,(*aPtr) : %d ,aPtr : %p \n",a,*aPtr,aPtr);

    // Accessing pointer of values defined in the heap
    int *heap_arr = (int*)malloc(5 * sizeof(int)); // Malloc reutns void* thus has to be type casted
    // heap_arr will hold a pointer to the first item in the array that got allocated in the heap

    // Example 2 
    int *heap_int = (int*)malloc(1 * sizeof(int)); 

    printf("Size of heap allocated array : %d \n",sizeof(*heap_arr));

    // Free heap-allocated memory
    free(heap_arr);

    // Prevent dangling pointers
    heap_int = NULL;
    heap_arr = NULL;

    return EXIT_SUCCESS;
}