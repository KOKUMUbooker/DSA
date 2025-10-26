package main

import "fmt"

type Rectangle struct{
	length int
	width int
}

// area method definition on receiver r of struct Rectangle
func (r *Rectangle) area() int {
	return r.length * r.width
}

// initialize method definition on receiver r of struct Rectangle
func (r *Rectangle) initialize(length int, width int) {
	r.length = length;
	r.width = width;
}

// initialize method definition on receiver r of struct Rectangle
func (r *Rectangle) changeLength(length int){
	r.length = length;
}

func main(){
	var rec Rectangle;
	
	rec.initialize(20,50);
	fmt.Println("Rec width : ",rec.width, " length : ",rec.length," , AREA : ",rec.area());
	
	rec.changeLength(80);
	fmt.Println("Rec width : ",rec.width, " length : ",rec.length," , AREA : ",rec.area());
}