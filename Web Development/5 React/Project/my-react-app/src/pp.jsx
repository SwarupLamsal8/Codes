function Profilepic() {
    const imageUrl = './src/Hellooooo!!!.png';

    const handleClick = (e) => e.target.style.display= "none";

    return (
        <img src={imageUrl} onClick={(e) => handleClick(e)}/>
    );
}

export default Profilepic;