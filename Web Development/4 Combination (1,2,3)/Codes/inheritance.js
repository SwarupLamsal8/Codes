class Animal{
    alive = true;
    eat() {
        console.log(`This ${this.name} is eating`);
    }
    sleep() {
        console.log(`This ${this.name} is sleeping`);
    }
}

class Rabbit extends Animal{
    name = "Rabbit";
    run() {
        console.log(`${this.name} is running!`);
    }
}
class Fish extends Animal{
    name = "Fish";
    swim() {
        console.log(`${this.name} is swimming!`);
    }
}
class Hawk extends Animal{
    name = "Hawk";
    flying() {
        console.log(`${this.name} is flying!`);
    }
}

const rabbit = new Rabbit();
const fish = new Fish();
const hawk = new Hawk();
rabbit.eat();
fish.sleep();
hawk.sleep();
hawk.eat();
rabbit.run();
hawk.flying();
fish.swim();