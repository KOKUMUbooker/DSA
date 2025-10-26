#include <iostream>

// Function prototypes
int add (int x,int y); // Pass by value
void add5ToVal(int *y); // Pass by address
void add10ToVal(int &y); // Pass by reference (Only available in C++ not in C)

// Function implementations
int add(int x,int y)
{
    return x + y;
}

void add5ToVal(int *y)
{
    (*y) += 5; 
}

void add10ToVal(int &y){
    y += 10; 
}

int main()
{
    int sum = 0; // Regular variable
    int *a = new int; // Pointer variable
    int &b = sum; // Reference variable

    sum =  add(10,50);
    std::cout << "Sum after add fn call : "<<sum << std::endl;
    
    add5ToVal(a);
    std::cout << "(*a) after add5ToVal fn call : "<<(*a) << std::endl;
    
    add10ToVal(b);
    std::cout << "&b reference after add10ToVal fn call : "<<b << " and its reference(sum) : "<<  sum << std::endl;


    delete a;
    a = nullptr;

    return EXIT_SUCCESS;
}