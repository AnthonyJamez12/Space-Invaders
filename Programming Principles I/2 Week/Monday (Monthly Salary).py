#Ask user to enter his salary
salary = input("What is your salary: ")

#Calculate the monthly pay
monthly_pay = float(salary)/12

#print out the monthly_pay
formatted_pay = format(monthly_pay, ".2f")
print("Your montly pay is: ", "$" + (formatted_pay))

