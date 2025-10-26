#include <stdio.h>
#include <stdlib.h>

struct Rectangle
{
    int length;
    int width;
};

int main()
{
    // ====================  Example 1 - (Struct pointer from struct stored in stack)
    struct Rectangle rec = {.length=150, .width=300};
    struct Rectangle *recPtr = &rec;
    
    // Accessing struct members on a pointer (Approach 1)
    (*recPtr).length = 50;
    (*recPtr).width = 250;
    
    // Accessing struct members on a pointer (Approach 2)
    recPtr->length = 100;
    recPtr->width = 350;
    
    printf("Rectangle length: %d , width: %d \n",recPtr->length,(*recPtr).width);
    
    // ====================  Example 2 - (Struct pointer from struct stored in heap)
    struct Rectangle *heapRec = NULL;
    heapRec = (struct Rectangle*)malloc(sizeof(struct Rectangle)); 
    if(!heapRec){
        perror("Malloc failed for heapRec");
        exit(1);
    }

    heapRec->length = 375;
    (*heapRec).width = 500;
    
    printf("Rectangle length: %d , width: %d \n",heapRec->length,(*heapRec).width);
    
    free(heapRec);
    heapRec = NULL;

    return EXIT_SUCCESS;
}