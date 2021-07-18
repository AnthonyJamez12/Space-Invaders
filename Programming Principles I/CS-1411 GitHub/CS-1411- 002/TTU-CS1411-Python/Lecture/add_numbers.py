# Read a list of numbers
# Calculate the sum of all numbers

# Instructions:
# 1. Create an accumulator to store the sum
# and set the initial value to 0
total = 0
prime_list = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47]

# 2. Use a for loop to iterate each number in the list
# and add the number to the accumulator
for number in prime_list:
    total += number  # total = total + number

# 3. Print the total
print("Total is", total)
