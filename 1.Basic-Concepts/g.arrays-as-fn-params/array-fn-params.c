#include <stdio.h>
#include <stdlib.h>

void modifySecondVal(int arr[],int len)
{
    if(len >= 1)
    {
        arr[1] = 5000; 
    }
}

void modifySecondArrVal(int *arr,int len)
{
    if(len >= 1)
    {
        arr[1] = 200; 
    }
}

int* generateIntHeapArray(int len)
{
    int *heap_arr = (int*)malloc(len * sizeof(int));
    if(!heap_arr)
    {
        perror("Malloc allocation failed");
        exit(1);
    }

    return heap_arr;
}

int main()
{
    int arr_len = 5;
    int stack_arr[5] = {1,2,3,4,5};
    int *heap_arr = generateIntHeapArray(arr_len);

    modifySecondVal(stack_arr,arr_len);
    modifySecondArrVal(heap_arr,arr_len);
    
    for(int i = 0; i < arr_len; i++)
    {
        printf("Index : %d : stack -> %d , heap -> %d \n",i,stack_arr[i], heap_arr[i]);
    }

    return EXIT_SUCCESS;
}