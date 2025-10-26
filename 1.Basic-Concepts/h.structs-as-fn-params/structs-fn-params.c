#include <stdio.h>
#include <stdlib.h>

void attemptToUpdateStruct(struct Rectangle rec); // Pass by value
int calculateArea(struct Rectangle rec); //Pass by value
void updateRecStruct(struct Rectangle *rec, int length, int width); // Pass by address

struct Rectangle 
{
    int length;
    int width;
};
  
  // Will not work since structs are passed by value
void attemptToUpdateStruct(struct Rectangle rec) 
{
    rec.length = 1000;
}

void updateRecStruct(struct Rectangle *rec, int length, int width)
{
  rec->length = length;
  rec->width = width;
}

int calculateArea(struct Rectangle rec)
{
  return rec.length * rec.width;
}

int main()
{
    struct Rectangle rec = {.length = 1, .width = 1};
 
    attemptToUpdateStruct(rec);
    printf("After attemptToUpdateStruct fn call : rec width : %d, length : %d\n",rec.width,rec.width );
    
    updateRecStruct(&rec,10,2);
    printf("After updateRecStruct(&rec,10,2) fn call : rec width : %d, length : %d\n",rec.width,rec.width );

    printf("Area : %d \n",calculateArea(rec));

    return 0;
}