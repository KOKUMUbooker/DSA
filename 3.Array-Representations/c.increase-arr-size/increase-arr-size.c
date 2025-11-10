#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p = malloc( 5 * sizeof(int));  // smaller array
    int *q = malloc( 10 * sizeof(int)); // larger array

    for (int i = 0; i < 5; i++)
    {
        q[i] = p[i];
    }
    
    // Free space occupied by contents of p, the smaller array
    free(p);

    // Make p point to q
    p = q;

    // Reset memory address stored by the variable q
    q = NULL;

    return 0;
}