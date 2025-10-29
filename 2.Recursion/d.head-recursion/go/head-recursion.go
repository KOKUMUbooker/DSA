package main

import "fmt"

func fun(n int){
	if n > 0 {
		fun(n - 1);
		fmt.Printf("%d",n);
	}
}

func main() {
	x := 5;
	fun(x)
}
