const person = {
    firstName: "Spongebob",
    lastName: "Squarepants",
    age: 31,
    isEmployed: true
}

const person2 = {
    firstName: "Patrick",
    lastName: "Star",
    age: 43,
    isEmployed: false,
    sayHello: () => {
        console.log("Hello motherfucker!")
    }
}

console.log(person.firstName);
console.log(person.lastName);
console.log(person.age);
console.log(person.isEmployed);


console.log(person2.firstName);
console.log(person2.lastName);
console.log(person2.age);
console.log(person2.isEmployed);
person2.sayHello();