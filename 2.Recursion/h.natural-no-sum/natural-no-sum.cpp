#include <iostream>

// 1) Recursive solution - O(n): 
// sum(n) = sum(n-1) + n
// Base condition : if n = 0 -> sum = 0

int sum(int n)
{
    if (n == 0)
        return 0;
    else
        return sum(n - 1) + n;
}

// 2) Fomula solution - O(1)
// sum(n) = (n * (n + 1)) / 2
int sum2(int n)
{
    return (n * (n + 1)) / 2 ;
}

// 3) Iterative solution - O(n)
int sum3(int n)
{
    int sum {0};
    int i {n};

    while (i > 0) 
    {
        sum += i;
        --i;
    }

    return sum;
}

int main()
{
    int n {10};
    std::cout << "Recursion method sum("<< n << "): " << sum(n) << std::endl; 
    std::cout << "Formula method sum("<< n << "): " << sum2(n) << std::endl; 
    std::cout << "Iterative method sum("<< n << "): " << sum3(n) << std::endl; 
    return 0;
}