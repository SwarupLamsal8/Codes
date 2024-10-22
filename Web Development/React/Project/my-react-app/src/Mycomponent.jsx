import React, { useState } from 'react';

function MyComponent() {
    
    const [name, setName] = useState("Guest");
    const [age, setAge] = useState(0);
    const [isEmployed, setEmplo] = useState(false);

    const updateName = () => {
        setName("Swarup");
    }

    const updateAge = () => {
        setAge(18);
    }
    
    const updateEmploy = () => {
        setEmplo(!isEmployed);
    }


    return (
        <div>

            <p>Name: {name}</p>
            <p>Age: {age}</p>
            <p>Is Employed? {isEmployed ? "Yes":"No"}</p>
            <button onClick={updateName}>Set Name</button>&nbsp;
            <button onClick={updateAge}>Set Age</button>&nbsp;
            <button onClick={updateEmploy}>Toggle Employment State</button>
            
        </div>
    )
}

export default MyComponent; 