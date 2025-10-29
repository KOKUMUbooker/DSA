#include <iostream>

// - Head recursions have the recursive call as the 1st statement 
//   before other operations 

void fun(int n)
{
  if(n > 0) 
  {
    fun(n - 1);
    std::cout << n ;
  }

  // // While loop equivalent
  // int i {n};
  // while (i > 0) 
  // {
  //   std::cout << n ;
  //   i--;
  // }
}

int main()
{
    int x {3};
    fun(x);

    return EXIT_SUCCESS;
}