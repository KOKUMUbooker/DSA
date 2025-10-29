package main

import "fmt"

func funcA(n int){
	if n > 0 {
		fmt.Printf(" A-%d ",n);
		funcB(n - 1)
	}
}

func funcB(n int){
	if n > 1 {
		fmt.Printf(" B-%d ",n);
		funcA(n/2);
	}
}

func main(){
	funcA(20);
	fmt.Println(""); // Add new line at the end
}