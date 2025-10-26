package main

import "fmt"

func main(){
  // Pointer declaration Approach 1
  var a int = 25;
  var aPtr *int = &a; 
  
  // Pointer declaration Approach 2
  var bPtr *int = new(int);
  
  // Dereferencing a pointer
  *aPtr = 50;
  *bPtr = 100;

  fmt.Println("a : ",a," ,(*aPtr) : ",*aPtr, " ,aPtr : ",aPtr);
  fmt.Println("(*bPtr) : ",(*bPtr)," , bPtr : ",bPtr);
}
