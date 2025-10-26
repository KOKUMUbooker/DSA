#include <iostream>


int main()
{
    // Defining a pointer - Accessing memory locations of values defined in the stack
    int a = 50;
    int *aPtr = &a;


    // Pointer dereferencing
    *aPtr = 100;
    std::cout <<"a : " << a << "(*aPtr) "<< *aPtr << "aPtr "<< aPtr << std::endl;

    int *heap_arr = nullptr;
    int *heap_int = nullptr;

    try
    {
        // Accessing pointer of values defined in the heap
        heap_arr = new int[5];
        // heap_arr will hold a pointer to the first item in the array that got allocated in the heap

        // Example 2
        heap_int = new int;
        *heap_int = 90; 
    }
    catch(const std::bad_alloc& e)
    {
        std::cerr << "Memory allocation failed: " << e.what() << '\n';
        exit(1);
    }

    std::cout << "Size of heap allocated array :"<< sizeof(*heap_arr) <<std::endl;

    // Free heap-allocated memory
    delete []heap_arr;
    delete heap_int;

    // To avoid dangling pointers
    heap_arr = nullptr;
    heap_int = nullptr;

    return EXIT_SUCCESS;
}