sum(displayPage, 3, 4);

function sum(callback, x, y) {
    let result = x + y;
    callback(result);
}

function display(result) {
    console.log(result);
}

function displayPage(result) {
    document.getElementById("myH1").textContent = result;
}