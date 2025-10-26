const myArray = [1, 20, 300, 4000, 50000];

console.log('============== For loop ================');
for (let i = 0; i < myArray.length; i++) {
  console.log(`Index - ${i}, Item : ${myArray[i]}`);
}

console.log('============== For each ================');
myArray.forEach((num, idx) => {
  console.log(`Index - ${idx} ,Item : ${num} `);
});
