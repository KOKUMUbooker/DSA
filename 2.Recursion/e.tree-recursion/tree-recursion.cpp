#include <iostream>

// - A tree recursion function calls itself multiple times 
// - In a tree recursive function, before the next recusive call
//   gets executed the previous call needs to finish ie including 
//   the new functions that the previous call will introduce into the
//   stack as a result of it being called

void fun (int n)
{
    if(n > 0)
    {
        std::cout << n;

        fun(n - 1);
        fun(n - 1);
    }
}

int main()
{
    fun(3);
    return 0;
}