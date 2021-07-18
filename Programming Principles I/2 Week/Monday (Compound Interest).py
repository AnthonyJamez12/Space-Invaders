#Compound interest

principal = float(input("Enter the principal amount: "))
rate = float(input("Enter the interest rate: "))
compound_frequency = float(input("Compound frequency: "))
years = float(input("For how many years: "))

amount = principal*(1 + rate/(100*compound_frequency))**(compound_frequency*years)

print("Total will be:", amount)
