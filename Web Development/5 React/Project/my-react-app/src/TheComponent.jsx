import React, {useState} from 'react'

function TheComponent() {
    
    const [count, setCount] = useState(0);

    function increment() {
        setCount(c => c + 1);
        setCount(c => c + 1);
    }

    function decrement() {
        setCount(c => c - 1);
    }

    function reset() {
        setCount(0);
    }
    
    return (
        <>
            <h2>Count: {count}</h2>
            <button onClick={decrement}>Decrement</button>
            <button onClick={reset}>Reset</button>
            <button onClick={increment}>Increment</button>
        </>
    );

}

export default TheComponent;