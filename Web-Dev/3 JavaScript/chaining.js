//WITHOUT CHAINING

let username = window.prompt(`Enter your username.`);
username = username.trim();

let letter = username.charAt(0);
letter = letter.toUpperCase(letter);

let extraChar = username.slice(1);
extraChar = extraChar.toLowerCase();

//USING CHAINING


username = letter + extraChar;
console.log(username);

username = username.trim().charAt(0).toUpperCase() + username.slice(1).toLowerCase();
console.log(username);