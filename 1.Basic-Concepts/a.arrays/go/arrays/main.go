package main

import "fmt"

func main(){
	my_array := [5]int{4,2,1,4,10}

	fmt.Println("========== Using For loop ============")
	for i := 0 ; i < len(my_array); i++ {
      fmt.Println("For loop value at index ", i," : ",my_array[i])
	}

	fmt.Println("========== Using Range ============")
	for idx,value := range my_array{
		fmt.Println("Range loop values at index ",idx, " : ",value)
	}
}