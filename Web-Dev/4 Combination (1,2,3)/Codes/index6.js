const numbers = [1, 2, 3, 4, 5, 6];

const evenNos = numbers.filter(function (element) {
    return element % 2 == 0;
}) 
const sum = numbers.reduce(function (accumulator,element) {
    return accumulator + element;
})
console.log(evenNos);
console.log(sum);