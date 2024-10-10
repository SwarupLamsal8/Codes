const person1={
    name: "Spongebob",
    favFood: "Hamburgers",
    sayHello: function(){console.log(`Hello I am ${this.name} and I like ${this.favFood}`)},
    eat: function(){console.log(`Don't you get it? I like to eat ${this.favFood}!!`)}
}

const person2={
    name: "Patrick",
    favFood: "Pizza",
    sayHello: function(){console.log(`Hello I am ${this.name} and I like ${this.favFood}`)},
    eat: function(){console.log(`Don't you get it? I like to eat ${this.favFood}!!`)}
}

person1.sayHello();
person1.eat();

person2.sayHello();
person2.eat();