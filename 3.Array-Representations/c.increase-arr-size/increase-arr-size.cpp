#include <iostream>

int main()
{
    int * p {NULL}; // Smaller array
    int * q {NULL}; // Larger array

    try
    {
        p = new int[5];
        q = new int[10];
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < 5; i++)
    {
        q[i] = p[i];
    }

    // Delete smaller array
    delete []p;

    // Make p now point to the larger array
    p = q;

    // Reset memory address of q to NULL
    q = NULL;

    return 0;
}