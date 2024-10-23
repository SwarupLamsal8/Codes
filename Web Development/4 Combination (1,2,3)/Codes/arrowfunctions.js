const numbers = [1, 2, 3, 4, 5, 6];
const squares = numbers.map((element) => Math.pow(element, 2));
const cubes = numbers.map((element) => Math.pow(element, 3));
const sum = numbers.reduce((accumulator, element) => accumulator + element);
const evenNumber = numbers.filter((element) => element % 2 === 0);
const oddNumber = numbers.filter((element) => element % 2 !== 0);

console.log(squares);
console.log(sum);
console.log(cubes);
console.log(evenNumber);
console.log(oddNumber);