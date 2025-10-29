package main

import "fmt"

// Solution 1 - Recursion
func factorial(n int) int{
	if n == 0 {
		return 1;
	} else {
		return factorial(n - 1) * n;
	}
}

// Solution 2 - Iteration
func factorial2(n int) int {
	factVal := 1
	for i := 1; i <= n; i++ {
		factVal *= i;
	}

	return factVal;
}

func main(){
	n := 5;
	fmt.Printf("Recursion factorial(%d) : %d\n",n,factorial(n));
	fmt.Printf("Iteration factorial(%d) : %d\n",n,factorial2(n));
}