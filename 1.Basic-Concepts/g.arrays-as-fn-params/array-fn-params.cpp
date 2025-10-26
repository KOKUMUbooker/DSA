#include <iostream>

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
    int *heap_arr = nullptr;
    try
    {
        heap_arr = new int[len];
    }
    catch(const std::bad_alloc& e)
    {
        std::cerr << "Memory allocation failed: " << e.what() << '\n';
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
        std::cout<<"Index : " << i <<" stack -> "<< stack_arr[i] <<", heap -> " << heap_arr[i] << std::endl;
    }

    return EXIT_SUCCESS;
}