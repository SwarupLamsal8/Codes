import random
import math

print("***Guess the number game***")

print("Enter the numbers between which the random number is to be generated:")
x=int(input("Enter the lower bound: "))
y=int(input("Enter the upper bound: "))

total_chances = math.ceil(math.log(y - x + 1, 2))
print("\n\tYou got only ", total_chances, " chances to guess the integer!\n")

generated_num=random.randint(x,y)

count=0
flag=False

while count<total_chances:
    count+=1

    guess=int(input("Enter your guess: "))

    if (guess<generated_num):
        print(f"The number is greater than {guess}")
    elif (guess>generated_num):
        print(f"The number is smaller than {guess}")
    else:
        print(f"Congratulations! the random number is {guess} and you guessed it in {count} tries!")
        flag=True
        break

if not flag:
    print(f"The number is {generated_num}")
    print("Better luck next time!")