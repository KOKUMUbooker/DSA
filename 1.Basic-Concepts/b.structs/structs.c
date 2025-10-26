#include <stdio.h>

struct Rectangle
{
    int length;
    int width;
    char x;
};

int main()
{
    struct  Rectangle rec = {100,50};
    struct  Rectangle rec2 = {.length=150, .width=300};

    printf("Char size : %d, Struct size : %d \n",sizeof(char),sizeof(rec));

    return 0;
}