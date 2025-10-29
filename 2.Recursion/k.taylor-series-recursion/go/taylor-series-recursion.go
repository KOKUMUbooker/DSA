package main

import "fmt"

/*
 TAYLOR SERIES
 -> e^x = 1 + x/1 + x^2/2! + x^3/3! + x^4/4! + ... + n terms

 Past recursion formualas :
    sum(n) = sum(n-1) + n
    factorial(n) = factorial(n-1) * n
    power(m,n) = power(m,n-1) * m

 Example -> e(x,4) :
  - 2 state variables(p for power,f for factorial) will be required & they'll be initialized
    with values for e(x,0) ie p=1, f=1 under a closure
  - For each recursive call, the 2 state variables (holding state for previous power & factorial values)
    will get updated to hold power & factorial values of the current recursive call context;
  - Upon updating the state values, they are used as the return value ie p/f
  - local variable r=e(x,n-1) holds the cumulative result of previous recursion calls
  - The final result is r + p/f

    e(x,4) = 1 + x/1 + x^2/2! + x^3/3! + x^4/4!   => e(x,3) + x^4/4!
       |
    e(x,3) = 1 + x/1 + x^2/2! + x^3/3!            => e(x,2) + x^3/3!
       |
    e(x,2) = 1 + x/1 + x^2/2!                     => e(x,1) + x^2/2!
       |
    e(x,1) = 1 + x/1                              => e(x,0) + x^1/1!
       |
    e(x,0) = 1                                    => 1
*/

type TSerieFunc func(x float64,n float64) float64;
func makeTSeriesFunc() TSerieFunc {
	var p float64 = 1;
	var f float64 = 1;
	
	var tSeriesFunc TSerieFunc;
	tSeriesFunc = func(x float64,n float64) float64{
		if(n==0) {
			return  1;
		}else{
			r := tSeriesFunc(x,n-1);
			p = p * x;
			f = f * n;
			return  r + p/f;
		}
	}

	return  tSeriesFunc;
} 

func main(){
	tSeriesFunc := makeTSeriesFunc();
	var x float64 = 1;
	var n float64 = 10;

	fmt.Printf("e(%f,%f.2f) = %f",x,n,tSeriesFunc(x,n));
}