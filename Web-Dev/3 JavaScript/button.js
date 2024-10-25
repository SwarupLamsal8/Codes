document.addEventListener('DOMContentLoaded', function() {

    const button1 = document.getElementById('button1');
    const input1 = document.getElementById('input1');

    button1.addEventListener('click', function () {
        const currentDate = new Date();
        const dateString = currentDate.toLocaleString();

        input1.placeholder = dateString;
    });
});
