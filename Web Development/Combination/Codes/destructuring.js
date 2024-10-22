// SWAP VALUES OF VARIABLES
let a = 1;
let b = 2;

[a, b] = [b, a];

console.log(a);
console.log(b);

// SWAP 2 ELEMENTS IN AN ARRAY
const colors = ["Red", "Green", "Blue", "Black", "White"];
[colors[0], colors[4]] = [colors[4], colors[0]];
console.log(colors);

//ASSIGN ARRAY ELEMENTS TO VARIABLES
const color = ["Red", "Green", "Blue", "Black", "White"];
const [firstColor, secondColor, thirdColor,...extraColors] = colors;
console.log(firstColor);
console.log(secondColor);
console.log(thirdColor);
console.log(extraColors);

//Extract values from objects
const person1 = {
    firstName: "Sugam",
    lastName: "Acharya",
    age: 24,
    job: "Coding Genius"
}

const person2 = {
    FName: "Durgam",
    LName: "Acharya",
    Age: 32
}

const {firstName,lastName,age,job} = person1;
console.log(firstName);
console.log(lastName);
console.log(age);
console.log(job);

const {FName,LName,Age,Job='Unemployed'} = person2;

console.log(FName);
console.log(LName);
console.log(Age);
console.log(Job);


//DESTRUCTURE IN FUNCITON PARAMETERS

function displayPerson({FName,LName,Age,Job}) {
    console.log(`Name:${FName} ${LName}\nAge:${Age}\nJob:${Job}`);
}

displayPerson(person2);