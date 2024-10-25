document.getElementById("submit").onclick = function () {
    let min = document.getElementById("inp1").value;
    min = Number(min);
    let max = document.getElementById("inp2").value;
    max = Number(max);
    let randnum = Math.floor(Math.random() * (max - min)) + min;
    document.getElementById("result").textContent="The random number generated is:"+randnum;
}

document.getElementById("reset").onclick = function () { 
    document.getElementById("inp1").value = "";
    document.getElementById("inp2").value = "";
    document.getElementById("result").textContent = "";
}
