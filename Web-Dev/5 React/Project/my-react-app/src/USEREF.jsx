import React, { useState, useEffect, useRef } from 'react';

function USEREF() {
    
    const inputRef = useRef(null);
    const inputRef1 = useRef(null);
    const inputRef2 = useRef(null);

    useEffect(() => {
        console.log("Component Rendered!");       
    });

    function handleClick1() {
        inputRef.current.focus();
        inputRef.current.style.backgroundColor = "yellow";
        inputRef1.current.style.backgroundColor = "";
        inputRef2.current.style.backgroundColor = "";
        console.log(inputRef.current.value);
    }
    
    function handleClick2() {
        inputRef1.current.focus();
        inputRef.current.style.backgroundColor = "";
        inputRef1.current.style.backgroundColor = "yellow";
        inputRef2.current.style.backgroundColor = "";
        console.log(inputRef.current.value);
    }
    
    function handleClick3() {
        inputRef2.current.focus();
        inputRef.current.style.backgroundColor = "";
        inputRef1.current.style.backgroundColor = "";
        inputRef2.current.style.backgroundColor = "yellow";
        console.log(inputRef.current.value);
    }

    return (
        <div>
            <button onClick={handleClick1}>
                Click Me 1!
            </button>
            <input ref={inputRef} />

            <button onClick={handleClick2}>
                Click Me 2!
            </button>
            <input ref={inputRef1} />

            <button onClick={handleClick3}>
                Click Me 3!
            </button>
            <input ref={inputRef2} />

        </div>
    );
}

export default USEREF; 