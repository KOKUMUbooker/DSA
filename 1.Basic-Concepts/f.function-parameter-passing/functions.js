// JS offers pass by value or pass by reference based on the argument type passed to the function
// - Arguments of primitive types get passed by value - stings, numbers, boolean
// - Arguments of reference types get passed by reference - arrays ,objects, sets , maps
let sum = 0;
const arr = [1, 2, 3, 4, 5];

function add(x, y) {
  return x + y;
}

function modifyArray(array) {
  array[0] = 50;
}

sum = add(20, 35);

modifyArray(arr);

console.log('sum : ', sum);

console.log('Arr[0] : ', arr[0]);
