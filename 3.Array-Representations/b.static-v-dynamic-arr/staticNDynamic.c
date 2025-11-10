#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 1.Static Array
    // Array elements get allocated on the stack
    int A[5] = {1,2,3,4,5};

    // 2. Dynamic Array
    // Array elements get allocated on the heap
    int *cPtr = (int*)malloc(sizeof(int) * 5); // Space for 5 ints allocated
    
    // Free memory & reset pointer back to null
    free(cPtr);
    cPtr = NULL;

    return 0;
}