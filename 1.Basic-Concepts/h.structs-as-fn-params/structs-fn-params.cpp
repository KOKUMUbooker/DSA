#include <iostream>

void attemptToUpdateStruct(struct Rectangle rec); // Pass by value
void updateRecStruct(struct Rectangle *rec, int length, int width); // Pass by address
int calculateArea(struct Rectangle &rec); //Pass by reference

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

int calculateArea(struct Rectangle &rec)
{
  return rec.length * rec.width;
}

int main()
{
    struct Rectangle rec = {.length = 1, .width = 1};
    struct Rectangle &recRef = rec;

    attemptToUpdateStruct(rec);
    std::cout << "After attemptToUpdateStruct fn call : rec width : " << rec.width << " length : %d " << rec.length <<std::endl;
    
    updateRecStruct(&rec,10,2);
    std::cout << "After updateRecStruct(&rec,10,2) fn call : rec width : " << rec.width << " length : %d " << rec.length <<std::endl;

    printf("Area : %d \n",calculateArea(rec));

    return EXIT_SUCCESS;
}