// class Rectangle{
//     set width(newWidth) {
//         if (newWidth > 0) {
//             this._width = newWidth;
//         }
//         else {
//             console.error("Width must be a positive number!");
//         }
//     }
//     set height(newHeight) {
//         if (newHeight > 0) {
//             this._height = newHeight;
//         }
//         else {
//             console.error("Height must be a positive number")
//         }
//     }
//     get width() {
//         return this._width.toFixed(1);
//     }
//     get height() {
//         return `${this._height.toFixed(1)}`;
//     }
//     get area() {
//         return `${(this._width* this._height).toFixed(1)}cm^2`;
//     }
// }

// const rectangle = new Rectangle();
// rectangle.width = 11;
// rectangle.height = 10;
// console.log(rectangle.height);
// console.log(rectangle.width);
// console.log(rectangle.area);

class Person{
    constructor(firstName, lastName, age) {
        this.firstName = firstName;
        this.lastName = lastName;
        this.age = age;
    }
    set firstName(newFname) {
        if (typeof (newFname) === "string" && newFname.length > 0) {
            this._firstName = newFname;
        }
        else {
            console.error("Please enter a valid First Name!, it must be a non-empty string.");
        }
    }

    set lastName(newLname) {
        if (typeof (newLname) === "string" && newLname.length > 0) {
            this._lastName = newLname;
        }
        else {
            console.error("Please enter a valid Last Name!, it must be a non-empty string.");
        }
    }
    set age(newAge) {
        if (typeof (newAge) === "number" && newAge > 0) {
            this._age = newAge;
        }
        else {
            console.error("Please enter a valid Age!, it must be a valid number.");
        }
    }

    get firstName() {
        return this._firstName;
    }

    get lastName() {
        return this._lastName;
    }

    get age() {
        return this._age;
    }
}
const person = new Person("Swarup", "Lamsal", 19);
console.log(person.firstName);
console.log(person.lastName);
console.log(person.age);