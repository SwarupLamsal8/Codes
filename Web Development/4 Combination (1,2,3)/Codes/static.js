class User{
    static userCount = 0;

    constructor(userName) {
        this.userName = userName;
        User.userCount += 1;
    }
    static getUserCount() {
        console.log(`There are ${User.userCount} number of users`);
    }
    sayHello() {
        console.log(`Hello my name is ${this.userName}`);
    }
}

const user1 = new User("SpongeBob");
const user2 = new User("Patrick");
const user3 = new User("Sandy");

user1.sayHello();
user2.sayHello();
user3.sayHello();
// console.log(User.userCount);
User.getUserCount();