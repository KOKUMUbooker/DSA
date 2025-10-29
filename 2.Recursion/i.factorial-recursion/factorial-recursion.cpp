#include <iostream>

// n! = 1 * 2 * 3 * 4 ... * n

// Solution 1 - Recursion
// factorial(n) = factorial(n - 1) * n
// Base case - factorial(0) = 1
int factorial(int n)
{
    if (n == 0)
        return 1;
    else 
        return factorial(n - 1) * n;
}

// Solution 2 - Iteration
int factorial2(int n)
{
    int factorial {1};
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }

    return factorial;
}

int main(){
    int n {5};
    std::cout << "Recursion factorial("<< n<<") : " << factorial(n) <<std::endl;
    std::cout << "Iteration factorial("<< n<<") : " << factorial2(n) <<std::endl;
    
    return EXIT_SUCCESS;
}