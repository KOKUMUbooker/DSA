package main

import "fmt"

func fun (n int){
	if n > 0 {
		fmt.Printf("%d",n);

		fun(n -1);
		fun(n -1);
	}
}

func main(){
	fun(3)
}