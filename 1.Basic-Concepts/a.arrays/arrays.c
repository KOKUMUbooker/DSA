#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[3] = {2,23,3};

    for(int i = 0; i < 3; i++)
    {
        printf("loop : %d\n", A[i]);
    }

    return EXIT_SUCCESS;
}