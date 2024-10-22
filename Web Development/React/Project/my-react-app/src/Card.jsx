import profilePic from './assets/Screenshot (211).jpg'

function Card() {
    return (
        <div className="card">
            <img className="card-image" src={profilePic} alt="A room full of Tertiary Storage Devices" />
            <h2 className="card-title">Swarup</h2>
            <p className="card-text">I am a Student Studying BCA.</p>
        </div>
    );
}

export default Card;