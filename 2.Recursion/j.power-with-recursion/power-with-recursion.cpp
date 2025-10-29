#include <iostream>

int power(int m,int n)
{
    if(n == 0)
        return 1;
    else
        return power(m, n-1) * m;
}

int main()
{
    int n = 2;
    int m = 25;

    std::cout << "Power Recursion method -> power("<<m <<","<<n<<") : "<<power(m,n)<<std::endl;

    return EXIT_SUCCESS;
}