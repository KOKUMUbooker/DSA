package main

import "fmt"

// Arrays in go when passed as params get passed through pass by value
// ie changes made to the passed array don't affect the original
// To allow for pass by address, ensure the parameter is a pointer to your array
// as below
func modifySecVal(arr *[5]int){
	(*arr)[2] = 78;
  	// arr[2] = 78; // -> This will also work since go will do the implicit dereferencing for you 
}

func main(){
	var	arr [5]int;
	arr[0] = 50;

	// new doesn't guarantee that the item gets created on the heap since
	// the garbage collector handles that
	var arr2 = new([5]int);
	arr2[3] = 5;

	modifySecVal(&arr);
	modifySecVal(arr2);

	for i := 0; i < 5; i++ {
		fmt.Printf("arr[%d] : %d , arr2[%d] : %d\n",i, arr[i], i, (*arr2)[i]);
	}
}