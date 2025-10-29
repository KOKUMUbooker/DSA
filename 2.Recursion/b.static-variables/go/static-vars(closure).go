package main

import "fmt"

// A closure is created to that holds the state x whose
// state is shared over recursive calls to the fun function.
func makeFun() func(int) int {
	x := 0
	var fun func(int) int
	fun = func(n int) int {
		if n > 0 {
			x++
			return fun(n-1) + x
		}
		return 0
	}
	return fun
}

func main() {
	fun := makeFun()
	fmt.Println(fun(5)) // prints 25
}
