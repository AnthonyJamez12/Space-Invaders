import time

num = int(input("Enter a positive number: "))
total1 = 0
t0 = time.time()
for i in range(1, num +1):
    total1 = total1 + i
t1 = time.time()

total2 = num*(num + 1)/2

t2 = time.time()

t3 = time.time()

print("t1 - t0 = ", str(t1 - t0))
print("t3 - t2 = ", str(t3 - t2))
