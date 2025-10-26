package main

import "fmt"

func main(){
	slice_val := []int{2,3,5,56,67,8}

	for idx,value := range slice_val{
       fmt.Println("Idx : ",idx, ", Value : ",value)
	}
}