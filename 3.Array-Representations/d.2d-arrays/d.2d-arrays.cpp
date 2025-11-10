#include <iostream>

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

    // 3. Double pointer (Fully dynamic 2D array)
    int **myArray3;

    try
    {
        myArray2[0] = new int[4]; 
        myArray2[1] = new int[4]; 
        myArray2[2] = new int[4]; 
    
        myArray3 = new int*[3];
        myArray3[0] = new int[4]; 
        myArray3[1] = new int[4]; 
        myArray3[2] = new int[4]; 
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        exit(1);
    }
        
    // Freeing memory
    for (int i = 0; i < 3; i++)
    {
        // Freeing memory from step 2
        delete []myArray2[i];
        myArray2[i] = NULL;
        
        // Freeing internal pointers from step 3
        delete []myArray3[i];
        myArray3[i] = NULL;
    }

    // Free external pointer from step 3
    delete []myArray3;
    myArray3 = NULL;

    return EXIT_SUCCESS;
}