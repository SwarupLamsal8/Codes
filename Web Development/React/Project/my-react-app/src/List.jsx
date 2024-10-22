import propTypes from 'prop-types'

function Lists(props) {

    const category = props.category || "Unknown!";
    const itemList = props.items || [];
    // fruits.sort((a, b) => a.name.localeCompare(b.name));//STRING
    // fruits.sort((a, b) => a.calories - b.calories);//NUMERIC

    // const highCalorieFruits = fruits.filter(fruit => fruit.calories > 100);

    // const selectedListItems = highCalorieFruits.map(fruit => <li>{fruit.name}, <b>{fruit.calories}</b></li>)

    // return (<ol>{selectedListItems}</ol>);
    
    const listItems = itemList.map(fruit => <li key={fruit.id}>
                    {fruit.name},
                    <b> Calories: {fruit.calories}</b></li>);
    return (<>
                <h3 className="listCategory">{category}</h3>
                <ol className="listItems">{listItems}</ol>
    </>)
    
}

Lists.propTypes = {
    category: propTypes.string,
    items: propTypes.arrayOf(propTypes.shape({
            id: propTypes.number,
            name: propTypes.string,
            calories: propTypes.number
    }))
}

export default Lists