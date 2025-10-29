package main

import "fmt"

func power(m int, n int) int {
	if n == 0 {
		return 1;
	}else {
		return  power(m,n-1) * m;
	}
}

func main(){
	m,n := 9,3;

	fmt.Printf("Recurion value for power(%d,%d) : %d",m,n,power(m,n)); 
}