package main

import "fmt"

func fun(x int) {
	if x > 0 {
		fmt.Printf("%d",x);
		fun(x - 1);
	}
}

func main() {
	x := 3;
	fun(x);
}
