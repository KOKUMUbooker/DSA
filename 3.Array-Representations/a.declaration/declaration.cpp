#include <iostream>

int main()
{
    int arr[] = {1,2,3,4,5};
    // int arr2[5] = {1,2}; // The rest 3 values filled with zeros
    // int arr3[5]; // Elements get filled with garbage data 
 
    for (short i = 0; i < 5; i++)
    {
        // Element access using [] notation
        std::cout << "arr" << "["<< i <<"] : " << arr[i] << std::endl;
        // Element access using pointer arithmetic
        std::cout << "*(arr + "<< i << ") : " << *(arr + i) << std::endl; 
        std::cout << std::endl;
    }
    
    return 0;
}