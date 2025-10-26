package main

import "fmt"

/*
  All functions in go use pass by value but pass by address can be achieved by specifying
  the function parameter to be a pointer
*/

func add (x int, y int ) int {
	return  x + y;
} 

func add2 (x int, y int ) (sum int ){
	sum = x + y;
	return; // Will implicitly return sum
}

func add5ToValue(y *int){
	(*y) += 5;
}

func main (){
  x,y := 10,20;
  
  x = add(20,50);
  fmt.Println("x after add fn call : ",x)
  
  x = add2(100,50);
  fmt.Println("x after add2 fn call : ",x)
  
  add5ToValue(&y);
  fmt.Println("y after add5ToValue fn call : ",y)

}
