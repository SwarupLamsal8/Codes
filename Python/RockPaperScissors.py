import random

def check_win(player,computer):
    # if player==computer:
    #     print("It's a tie")
    # elif (player=="rock" and computer=="scissors") or (player=="scissors" and computer=="paper") or (player=="paper" and computer=="rock"):
    #     print("player wins")
    # else:
    #     print("computer wins")

    if player==computer:
        print("It's a tie")

    elif player=="rock":
        if computer=="paper":
            print("You lose")
        else:
            print("you win")

    elif player =="scissors":
        if computer=="rock":
            print("you lose")
        else:
            print("you win")

    elif player =="paper":
        if computer=="rock":
            print("you win")
        else:
            print("you lose")

    return 0

def get_choices():
    player_choice=input("Enter the choice(rock,paper,scissors)")
    options=["rock","paper","scissors"]
    computer_choice=random.choice(options)
    choices={"player":player_choice,"computer":computer_choice}
    print(f"The user choose {player_choice} and the computer choose {computer_choice}")    
    return choices

choices=get_choices()
result=check_win(choices["player"],choices["computer"])