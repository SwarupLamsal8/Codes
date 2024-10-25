const dcrBTN = document.getElementById("dcrBTN");
const incBTN = document.getElementById("incBTN");
const resetBTN = document.getElementById("resetBTN");
const countLBL = document.getElementById("countLBL");
let count = 0;

incBTN.onclick = function () {
    count++;
    countLBL.textContent = count;
}

resetBTN.onclick = function () { 
    count = 0;
    countLBL.textContent = count;
}

dcrBTN.onclick = function () { 
    count--;
    countLBL.textContent = count;
}