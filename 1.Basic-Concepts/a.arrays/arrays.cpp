#include <iostream>

int main()
{
    int my_array[] {2,5,7,8,7};

    std::cout << " Size of array : " << sizeof(my_array) << "\n";
    for(int i = 0; i < 5; i++)
    {
        std::cout << " Arr val : " << my_array[i] << "\n";
    }

    std::cout << "========= For each loop ====="<<std::endl;
    for(int value:my_array)
    {
        std::cout << "value : " << value << std::endl;
    }

    return 0;
}