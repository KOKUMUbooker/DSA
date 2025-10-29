#include <iostream>

// - Indirect recursion occurs when one function calls another
//   function & the other function calls the 1st one - resulting
//   in a cycle of function calls

// Function prototype fpr B defined to tell compiler that 
// funcB has been defined - Is required since funA calls funB 
// though funB has not yet been defined
void funB(int n);

void funA(int n)
{
    if (n > 0)
    {
        std::cout << " A-" << n << " ";
        funB(n - 1);
    }
}

void funB(int n)
{
    if (n > 1)
    {
        std::cout << " B-" << n << " ";
        funA(n / 2);
    }
}

int main()
{
    funA(20);

    std::cout << std::endl; // Add new line at the end

    return EXIT_SUCCESS;
}