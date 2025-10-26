package main

import "fmt"

type Rectangle struct{
	width int
	lenght int
}

func main(){
    var rec Rectangle = Rectangle{ width: 300,lenght: 500};
	recPtr := &rec;

	(*recPtr).lenght = 20;
	// Dereferencing(*recPtr) is implicitly done by go, so you don't have to do it 
	recPtr.width = 50; 

	fmt.Println("Rec values length : ",rec.lenght, " width : ",rec.width);
}
