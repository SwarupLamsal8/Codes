const minNum = 50;
const maxNum = 100;
const answer = Math.floor(Math.random() * (maxNum - minNum + 1) +minNum);

let attempts = 0;
let guess;
let running = true;
while (running) {

    guess = window.prompt(`Enter a number between ${minNum} and ${maxNum}: `);
    guess = Number(guess);
    
    if (isNaN(guess)) {
        window.alert(`Please enter a valid number`);
    }
    else if (guess < minNum || guess > maxNum) {
        window.alert(`Please enter a valid number`);
    }
    else {
        attempts++;
        if (guess > answer) {
            window.alert(`The number is lower!`);
        }
        else if (guess < answer) {
            window.alert(`The number is higher!`);
        }
        else {
            window.alert(`Congratulations! You have guesed the correct number which is ${guess} and you guessed it in ${attempts} attempts!`);
            running = false;
        }
    }
}