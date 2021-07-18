import turtle
length = 100
angle = 45
num_sides = 8


turtle.hideturtle()
for count in range(num_sides):
    turtle.forward(length)
    turtle.left(angle)
    
turtle.done()
