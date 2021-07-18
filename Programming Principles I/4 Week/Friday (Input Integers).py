print("Input a negative number to add the numbers,")
total = 0
while True:
    num = int(input("Enter a positive number: "))
    if num > 0:
        total += num
    else:
        break
        
print("The total of the sum is, " + str(total))



year=1
tuition=8000
while(year<=5):
    if (year==1):
        tuition=1.03*tuition
        print("In ", year," year, the tuition will be $", +(tuition),".",sep="")
        year=year+1
    else:
        tuition=1.03*tuition
        print("In ", year," years, the tuition will be $", +(tuition),".",sep="")
        year=year+1
