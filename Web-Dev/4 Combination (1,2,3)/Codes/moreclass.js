class Animal{
    constructor(name,age){
        this.name = name;
        this.age = age;
    }
    move(speed) {
        console.log(`This ${this.name} moves at the speed of ${speed}mph`)
    }
}
class Rabbit extends Animal{
    constructor(name,age,runSpeed) {
        super(name,age);
        this.runSpeed = runSpeed;
    }

    run() {
        console.log(`This ${this.name} can run`);
        super.move(this.runSpeed);
    }
}
class Fish extends Animal{
    constructor(name,age,swimSpeed) {
        super(name,age);
        this.swimSpeed = swimSpeed;   
    }
    swim(){
        console.log(`This ${this.name} can swim`)
        super.move(this.swimSpeed);
    }
}
class Hawk extends Animal{
    constructor(name,age,flySpeed) {
        super(name,age);
        this.flySpeed = flySpeed;
    }
    fly() {
        console.log(`This ${this.name} can fly`);
        super.move(this.flySpeed);
    }
}

const rabbit = new Rabbit("Rabbit", 3, 25);
const fish = new Fish("Fish", 2, 12);
const hawk = new Hawk("Hawk", 6, 35);
console.log(rabbit.age);
console.log(rabbit.name);
console.log(fish.age);
console.log(fish.name);
console.log(hawk.age);
console.log(hawk.name);
console.log(rabbit.runSpeed);
console.log(fish.swimSpeed);
console.log(hawk.flySpeed);
rabbit.run();
fish.swim();
hawk.fly();