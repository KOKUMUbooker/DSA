#include <iostream>

class Rectangle
{
    public:
        int length;
        int width;
        Rectangle(int length,int width);
        ~Rectangle(); // A destructor - is called when class instance is destroyed
        int area();
        void changeLength(int length);
};

Rectangle::Rectangle(int length,int width)
{
    this->length = length;
    this->width = width;
}

Rectangle::~Rectangle()
{
    std::cout << "Instance destroyed !!" << std::endl;
}

int Rectangle::area()
{
    return this->length * this->width;
}

void Rectangle::changeLength(int length)
{
    this->length = length;
}

int main()
{
    Rectangle rec {20,40};

    std::cout << "Rec dimensions(NO CHANGE) -> length : " << rec.length <<" , width : "<< rec.width << " ,Area : "<< rec.area() <<std::endl;
    
    rec.changeLength(100);
    std::cout << "Rec dimensions(WITH CHANGE) -> length : " << rec.length <<" , width : "<< rec.width << " ,Area : "<< rec.area() <<std::endl;
    
    return EXIT_SUCCESS;
}