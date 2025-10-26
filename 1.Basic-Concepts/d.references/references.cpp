#include <iostream>

// Reference is a feature only available in cpp
int main()
{
    int a = 10;
    int &r = a; // Reference variable to "a"
    // Reference MUST always be initialized
    // They don't consume storage but just act as an alias to some other variable

    std::cout  << "Before reference change ====== "<<std::endl;
    std::cout  << "a : " << a << " r : "<<r <<std::endl;
    
    r += 5;
    std::cout  << "Before reference change ====== "<<std::endl;
    std::cout  << "a : " << a << " r : "<<r <<std::endl;

    return EXIT_SUCCESS;
}