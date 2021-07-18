import random



def getFortune(answerNumber):
    if answerNumber == 1:
        print("It is certain")
    elif answerNumber == 2:
        print("It is decidely so")
    elif answerNumber == 3:
        print("Yes")
    elif answerNumber == 4:
        print("Reply hazy try again")
    elif answerNumber == 5:
        print("Ask again later")
    elif answerNumber == 6:
        print("It is not certain")
    elif answerNumber == 7:
        print("It is decidely not so")
    elif answerNumber == 8:
        print("No")
    elif answerNumber == 9:
        print("Undoutful")

while True:
    try:
        answerNumber = int(input("Choose a number from 1 to 9, or enter 0 to get your fortune: "))
        if answerNumber == 0:
            answerNumber = random.randint(1, 9)
        break
    except ValueError:
        print("Invalid number. ")
        
getFortune(answerNumber)

