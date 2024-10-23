document.getElementById("submitbtn").onclick = function () {
    let age = document.getElementById("enterAge").value;
    let selection = document.getElementById("y/n").value;
    if (age >= 18 && selection == "yes")
    {
        swal("Success","You are Eligible to drive!");
    }    
    else if (age >= 18 && selection == "no")
    {
        swal("Failed","Although you are old enough you don't have a license and hence Ineligible to drive");
    }
    else
    {
        swal("Failed","You are not old enough and Ineligible to drive!");        
    }
    console.log(age);
    console.log(selection);
}