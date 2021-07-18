user_input = input("Enter an integer: ")
try:
    number = int(user_input)
    print("You entered ", number)
    #Your code

except ValueError:
    print("Error")
    print("The input must be an interger.")
