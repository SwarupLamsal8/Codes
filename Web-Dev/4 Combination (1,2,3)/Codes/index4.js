const chkbx = document.getElementById("chkbx");
const visabtn = document.getElementById("visaBtn");
const masterbtn = document.getElementById("masterCardBtn");
const payplbtn = document.getElementById("paypalBtn");
const respara = document.getElementById("subResult");
const paypara = document.getElementById("paymentResult");

document.getElementById("mySubmit").onclick = function () {
    if (chkbx.checked) {
        swal.fire({
            title: "Success!",
            text: "You have Subscribed!",
            icon: "success"
        })
        respara.textContent = "You have Subscribed!";
    }
    else
    {
        swal.fire({
            title: "Failed",
            text: "You are not Subscribed!",
            icon: "error"
        })
        respara.textContent = "You have not Subscribed!"; 
    }
    if (visabtn.checked)
    {
        swal.fire({
            title: "Sucess!",
            text: "You have made a payment through Visa Card!",
            icon: "success"
        })
        paypara.textContent = "You have made a payment through Visa Card!";
    }
    else if (masterbtn.checked)
    {
        swal.fire({
            title: "Sucess!",
            text: "You have made a payment through Master Card!",
            icon: "success"
        })
        paypara.textContent = "You have made a payment through Master Card!";
    }
    else if(payplbtn.checked)
    {
        swal.fire({
            title: "Sucess!",
            text: "You have made a payment through PayPal Card!",
            icon: "success"
        })
        paypara.textContent = "You have made a payment through PayPal Card!";
    }
    else
    {
        swal.fire({
            title: "Failed",
            text: "You have not made the payment!",
            icon:"error"
        })    
        paypara.textContent="You have not made the payment!"
    }
}