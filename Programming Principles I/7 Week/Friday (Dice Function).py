# This program simulates the rolling of dice
import random

MIN = 1
MAX = 6

def numbers():
    print('Rolling the dice...')
    print('Their values are: ')
    print(random.randint(MIN, MAX))
    print(random.randint(MIN, MAX))
    
def main():
    # create a variable to control the loop

    again = 'y'    

    while again == 'y' or again == 'Y':
        numbers()
        again = input('Roll them again? (y = yes): ')



main()
