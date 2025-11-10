#include "stdio.h"
#include "stdlib.h"

int main()
{
    // # 3 ways to declare a @D array
    // 1. Normal decalration 
    int myArray[3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

    // 2. As an array of pointers (Partially dynamic 2D array)
    int *myArray2[3];
    myArray2[0] = malloc(4 * sizeof(int)); 
    myArray2[1] = malloc(4 * sizeof(int)); 
    myArray2[2] = malloc(4 * sizeof(int)); 

    // 3. Double pointer (Fully dynamic 2D array)
    int **myArray3;
    myArray3 = malloc(3 * sizeof(int));
    myArray3[0] = malloc(4 * sizeof(int)); 
    myArray3[1] = malloc(4 * sizeof(int)); 
    myArray3[2] = malloc(4 * sizeof(int)); 

    // Freeing memory
    for (int i = 0; i < 3; i++)
    {
        // Freeing memory from step 2
        free(myArray2[i]);
        myArray2[i] = NULL;

        // Freeing internal pointers from step 3
        free(myArray3[i]);
        myArray3[i] = NULL;
    }

    // Free external pointer from step 3
    free(myArray3);
    myArray3 = NULL;

    return EXIT_SUCCESS;
}