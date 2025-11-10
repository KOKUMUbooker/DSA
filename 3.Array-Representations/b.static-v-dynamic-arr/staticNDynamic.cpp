#include <iostream>

int main()
{
    // 1.Static Array
    // Array elements get allocated on the stack
    int A[5] = {1,2,3,4,5};

    // 2. Dynamic Array
    // Array elements get allocated on the heap
    int *cppPtr {NULL};
    try
    {
        cppPtr = new int[5];
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    // Assign values
    for (short i = 0; i < 5; i++)
    {
        // Assignment through subscript syntax
        cppPtr[i] = i;
        // // Assignment through pointer arithmetic
        // *(cppPtr + i) = i; 
    }
    
    
    // Free memory & reset pointer back to null
    delete []cppPtr;
    cppPtr = NULL;

    return 0;
}