#include <iostream>

// - Nested recursion is implemented when a recursive function
//   calls itself & the argument for that function call is 
//   also a call to itself

int fun(int n)
{
    if (n > 100)
        return n - 100;
    else 
        return fun(fun(n + 11));
}

int main()
{
    std::cout << fun(95);
    return EXIT_SUCCESS;
}