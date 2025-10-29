package main

import "fmt"

// 1) Recursive solution :
// sum(n) = sum(n-1) + n
// Base condition : if n = 0 -> sum = 0

func sum(n int) int {
	if n == 0 {
		return 0;
	}else {
		return sum(n -1) + n;
	}
}

// 2) Fomula solution
// sum(n) = (n * (n + 1)) / 2
func sum2(n int) int {
	return (n * (n + 1)) / 2 ;
}

// 3) Iterative solution
func sum3(n int) int {
	sum,i := 0,n;

	for i > 0 {
		sum += i;
		i--;
	}  

    return sum;
}

func main(){
	n := 10;
	fmt.Println("Recursion method sum(",n,"): ",sum(n));
	fmt.Println("Formula method sum(",n,"): ",sum2(n));
	fmt.Println("Iterative method sum(",n,"): ",sum3(n));
}