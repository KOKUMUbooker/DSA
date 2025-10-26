package main

import "fmt"

type Rectangle struct{
	length int
	width int
}

func main(){
  rec := Rectangle{length: 25,width: 50}
  rec2 := Rectangle{50,100}

  // Accessing struct fields
  fmt.Printf("Rec 1 fields -> length : %d ,witdth : %d\n",rec.length,rec.width)
  
  fmt.Println("Rec : ",rec)
  fmt.Println("Rec2 : ",rec2)
}