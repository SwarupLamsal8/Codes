function Button() {
    

    const handleClick = (e) => e.target.textContent = "Ouch!";
        // if (count < 3) {
        //     count++;
        //     alert(`${name}, have clicked me ${count} time/s`);
        // }
        // else {
        //     alert(`${name}, Stop clicking me!`);
        // }
    
    
    return (
        <>
            <button onDoubleClick={(e) => handleClick(e)}>👉Click Me!</button>
        </>
    );
}

export default Button;