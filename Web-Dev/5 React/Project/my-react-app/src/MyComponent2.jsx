import React, {useState} from 'react'

function MyComponent2() {
    
    const [name, setName] = useState("Guest");
    const [quantity, setQuantity] = useState();
    const [comment, setComment] = useState("");
    const [payment, setPayment] = useState("");
    const [shipping, setShipping] = useState("");

    function handleNameChange(event) {
        setName(event.target.value)
    }

    function handleQuantityChange(event) {
        setQuantity(event.target.value);
    } 

    function handleCommentChange(event){
        setComment(event.target.value);
    }

    function handlePaymentChange(event) {
        setPayment(event.target.value);
    }

    function handleShippingChange(event) {
        setShipping(event.target.value);
    }

    return (
        <div>
            <p>Name: {name}</p>
            <input value={name} onChange={handleNameChange} />
            
            <p>Quantity: {quantity}</p>
            <input value={quantity} onChange={handleQuantityChange} type='number' />
            
            <p>Comment: {comment}</p>
            <input value={comment} onChange={handleCommentChange} type='text' placeholder='Add Delivery Instructions' />

            <p>Payment Method: {payment}</p>
            <select value={payment} onChange={handlePaymentChange}>
                <option value="">Select an Option</option>
                <option value="Visa">Visa</option>
                <option value="MasterCard">MasterCard</option>
                <option value="Giftcard">Giftcard</option>
            </select>

            <p>Shipping: {shipping}</p>
            <input type="radio" value="Pick Up" checked={shipping==="Pick Up"} onChange={handleShippingChange}/>
            <label>
                Pickup
            </label><br />
            
            <input type="radio" value="Delivery" checked={shipping === "Delivery"} onChange={handleShippingChange} />
            <label>
                Delivery
            </label>
            
        </div>
    ); 
}

export default MyComponent2