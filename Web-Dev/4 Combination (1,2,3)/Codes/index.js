let username;
document.getElementById("btn1").onclick = function () {
    username = document.getElementById("UName").value;
    document.getElementById("head1").textContent = `Hello ${username}`;
    console.log(username);
}