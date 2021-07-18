import math

isValid = True

def do_factorial(number):
    if isValid == True:
        fact = math.factorial(number)
        print(f" The factorial is: {fact}")

def main():
    #ask for a number
    number = int(input("Enter a number: "))
    if number < 0:
        global isVlalid
        isValid = False
        
    #calculate the factorial
    do_factorial(number)

main()
