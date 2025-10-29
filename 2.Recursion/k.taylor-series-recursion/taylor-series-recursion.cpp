#include <iostream>

/*
 TAYLOR SERIES
 -> e^x = 1 + x/1 + x^2/2! + x^3/3! + x^4/4! + ... + n terms

 Past recursion formualas : 
    sum(n) = sum(n-1) + n
    factorial(n) = factorial(n-1) * n
    power(m,n) = power(m,n-1) * m

 Example -> e(x,4) : 
  - 2 static variables(p for power,f for factorial) will be required & they'll be initialized 
    with values for e(x,0) ie p=1, f=1
  - For each recursive call, the 2 static variables (holding state for previous power & factorial values)
    will get updated to hold power & factorial values of the current recursive call context;
  - Upon updating the static values, they are used as the return value ie p/f
  - local variable r=e(x,n-1) holds the cumulative result of previous recursion calls
  - The final result is r + p/f

    e(x,4) = 1 + x/1 + x^2/2! + x^3/3! + x^4/4!   => e(x,3) + x^4/4!
       |
    e(x,3) = 1 + x/1 + x^2/2! + x^3/3!            => e(x,2) + x^3/3! 
       |
    e(x,2) = 1 + x/1 + x^2/2!                     => e(x,1) + x^2/2!
       |
    e(x,1) = 1 + x/1                              => e(x,0) + x^1/1!
       |
    e(x,0) = 1                                    => 1
*/

double e(int x, int n)
{
    static double p=1, f=1;
    double r;

    if (n==0)
        return 1;
    else 
    {
        r=e(x,n-1);
        p=p*x;
        f=f*n;
        return r+p/f;
    }
}

int main()
{
    int x {1};
    int n {10};
    std::cout << "e("<<x << n<<") = "<<e(1,10) <<std::endl;
    
    return EXIT_SUCCESS;
}