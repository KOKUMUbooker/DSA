#include <iostream>

// - Tail recursion have the recursive call being the 
//   last call after other operations have been done.
// - Tail recursions can easily be converted to while loops.
// - If any statement follows the recursion call, then that disqualifies
//   the recursive function from being a tail recursion
void fun(int n)
{
    if(n > 0)
    {
        std::cout << n;
        fun(n - 1);
    }

    // While loop equivalent of the recursive function
    // while(n > 0)
    // {
    //     std::cout << n;
    // }
}

int main()
{
    int x = 3;
    fun(x);
    return 0;
}