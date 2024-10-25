const textbox = document.getElementById("txtBox");
const toFah = document.getElementById("toFah");
const toCel = document.getElementById("toCel");
const result = document.getElementById("result");
let temp;

function convert() {
    if (toFah.checked) {
        temp = Number(textbox.value);
        temp = temp * 9 / 5 + 32;
        result.textContent = `${temp}°F`;
    }
    else if (toCel.checked) {
        temp = Number(textbox.value);
        temp = (temp - 32) * (5 / 9);
        result.textContent = `${temp}°F`;    
    }
    else {
        result.textContent = `Please select a unit`;
    }
}