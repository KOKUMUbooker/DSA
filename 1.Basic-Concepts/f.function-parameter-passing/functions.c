#include <stdio.h>
#include <stdlib.h>

// Function prototypes
int add (int x,int y); // Pass by value
void add5ToVal(int *y); // Pass by address

// Function implementations
int add(int x,int y)
{
    return x + y;
}

void add5ToVal(int *y)
{
    (*y) += 5; 
}


int main()
{
    int sum = 0; // Regular variable
    int *a = (int*)malloc(sizeof(int)); // Pointer variable

    if(!a)
    {
        perror("Malloc allocation failed for *a");
        exit(1);
    }

    sum =  add(10,50);
    printf("Sum after add fn call : %d\n",sum );
    
    add5ToVal(a);
    printf("(*a) after add5ToVal fn call : %d\n",(*a) );

    free(a);
    a = NULL;

    return EXIT_SUCCESS;
}