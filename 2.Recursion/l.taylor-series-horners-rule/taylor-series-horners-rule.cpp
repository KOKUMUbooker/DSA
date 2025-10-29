#include <iostream>
/*
 TAYLOR SERIES
 -> e^x = 1 + x/1 + x^2/2! + x^3/3! + x^4/4! + ... + n terms

 Example :
 e^4 : 
  => 1 + x/1  +  x^2/1*2  +  x^3/1*2*3  +  x^4/1*2*3*4

  - Factor out  1 + x/1
  => 1 + x/1 ( 1  +  x/2  +  x^2/2*3  +  x^3/2*2*3 )

  - Factor out  1 + x/2
  => 1 + x/1 ( 1 + x/2 ( 1 + x/3 + x^2/3*4 ) )

  - Factor out 1 + x/3
  => 1 + x/1 ( 1 + x/2 ( 1 + x/3 ( 1 + x/4 ) ) )

  - This approach ensures that the time complexity is linear
    ie O(n)
*/

// Solution 1 : Itreation
double e(int x,int n) 
{
    double s {1};

    for( ;n > 0; n--) 
    {
        s = 1 + x/n * s;
    }

    return s;
}

// Solution 2 : Recursion
double e2(int x,int n) 
{
    static double s {1};
    if(n==0)
        return s;
    else {
        s = 1 + x/n * s;
        return e2(x,n-1);
    }
}

int main()
{
    int x {1};
    int n {10}; 

    std::cout << "Iteration e("<<x<<","<<n<<") : "<<e(x,n) << std::endl;
    std::cout << "Recursion e("<<x<<","<<n<<") : "<<e2(x,n) << std::endl;
    return EXIT_SUCCESS;
}