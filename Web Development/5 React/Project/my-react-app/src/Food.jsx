function Food() {
    
    const food1="Pizza"    
    const food2="Apple"    

    return (
        <ul>
            <li>Burger</li>
            <li>{food1}</li>
            <li>{food2.toLowerCase()}</li>
        </ul>
    );
}

export default Food;