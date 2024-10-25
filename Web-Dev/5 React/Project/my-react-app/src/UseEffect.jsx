import React, { useState, useEffect } from 'react'

function UseEffect() {
    
    const [width, setWidth] = useState(window.innerWidth);
    const [height, setHeight] = useState(window.innerHeight);

    useEffect(() => {
        window.addEventListener("resize", handleResize);
        console.log("Event Listner Added!");

        return () => {
            window.removeEventListener("resize", handleResize);
            console.log("Event Listner Removed!");
        }
    }, []);
    
    useEffect(() => {
        document.title = `Size ${width}x${height}`;
    },[width,height]);

    function handleResize() {
        setWidth(window.innerWidth);
        setHeight(window.innerHeight);
    }

    return (
        <>
            <p>Window Width:{width} px</p>
            <p>Window Width:{height} px</p>

        </>
    );
}

export default UseEffect;