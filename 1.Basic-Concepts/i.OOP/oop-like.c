#include <stdio.h>
#include <stdlib.h>

int area(struct Rectangle rec); 
void initialize(struct Rectangle *rec, int length, int width); // Pass by address
void changeLength(struct Rectangle *rec, int length); 

struct Rectangle 
{
    int length;
    int width;
};

void initialize(struct Rectangle *rec, int length, int width)
{
    rec->length = length;
    rec->width = width;
}

void changeLength(struct Rectangle *rec, int length)
{
    rec->length = length;
}

int area(struct Rectangle rec)
{
  return rec.length * rec.width;
}

int main()
{
    struct Rectangle rec;
 
    initialize(&rec,10,20);
    printf("After initialize(&rec,10,2) fn call : rec width : %d, length : %d\n",rec.width,rec.width );

    printf("Area : %d \n",area(rec));
    
    changeLength(&rec, 100);
    
    printf("Area : %d \n",area(rec));

    return 0;
}