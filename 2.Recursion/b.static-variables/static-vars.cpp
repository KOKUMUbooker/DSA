#include <iostream>

int fun(int n)
{
    // Will be declared in the code section of the porgrams memory & NOT in a stack frame
    // Thus, changes made to this variable will persist across stack frame deletions
    static int x {0};

    if(n > 0)
    {
        x++;
        return fun(n -1) + x;
    }

    return 0;
}

int main()
{
    int x {5};
    std::cout << fun(x) << std::endl;
}