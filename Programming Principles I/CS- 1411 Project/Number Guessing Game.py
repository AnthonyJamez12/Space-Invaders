import random

secret = 1
guess = 0
tries = 0
secret = random.randrange(1, 101)
while guess != secret:
    guess = int(input("Guess a number from 1 to 100"))
    tries = tries + 1

    if tries ==3 or tries == 6 or tries == 9 or tries == 12:
        if guess > secret:
            print("Your guess was to high")
        elif guess < secret:
            print("Your guess was to low")
        elif guess == secret:
            print("You guessed right")
    elif tries == 15:
        if guess > secret:
            print("Your guess was to high")
        elif guess < secret:
            print("Your guess was to low")
        elif guess == secret:
            print("You guess right")
        print("The number was, ", (secret))
        break

   
        

print("Number of tries:", tries)



