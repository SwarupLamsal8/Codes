import PropTypes from 'prop-types'

function Greeting(props) {
    const welcomeMessage = <h2 className="Welcomemsg">
        Hello {props.username}</h2>
    
    const loginPrompt= <h2 className="Loginprompt">
        Please login to continue</h2>
    
    return (props.isLoggedin ? welcomeMessage:loginPrompt);
}

Greeting.PropTypes={
    isLoggedIn: PropTypes.bool,
    username: PropTypes.string
}

Greeting.defaultProps = {
    isLoggedIn: false,
    username: "Guest"
}


export default Greeting;