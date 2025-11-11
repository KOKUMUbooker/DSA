#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int *array;
    int size;
    int length;
};

void InitArray(struct Array *arr, int size)
{
    arr->size = size;
    arr->array = (int*)malloc(size * sizeof(int));
    if (arr->array == NULL) {
        perror("Memory allocation failed");
        exit(1);
    }   
}

void CreateArray(struct Array *arr)
{
    printf("Enter the number of elements (max of %d) : ",arr->size);
    scanf("%d",&(arr->length));

    if(arr->length > arr->size)
    {
        perror("Max array size exceeded");
        exit(1);
    }

    printf("\nEnter the array elements: \n");
    for (int i = 0; i < arr->length; i++)
    {
        printf("Array[%d] = ",i);
        scanf("%d",&(arr->array[i]));
    }
}

void DisplayArrayElements(struct Array *arr)
{
    for (int i = 0; i < arr->length; i++)
    {
        printf("%d, ",arr->array[i]);
    }
    printf("\n");
}

void freeMemory(struct Array *arr)
{
    free(arr->array);
    arr->array = NULL;
    arr->size = 0;
    arr->length = 0;
}

int main()
{
    struct Array myArray = (struct Array){};

    InitArray(&myArray,10);

    CreateArray(&myArray);

    DisplayArrayElements(&myArray);

    freeMemory(&myArray);

    return EXIT_SUCCESS;
}