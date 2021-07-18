import turtle


def square(x, y, width, color):
    turtle.hideturtle()
    turtle.penup()
    turtle.goto(x, y)
    turtle.pendown()
    turtle.fillcolor(color)
    turtle.begin_fill()
    for count in range(4):
        turtle.left(90)
        turtle.forward(width)
    turtle.end_fill()




square(0, 0, 25, 'red')
square(100, 100, 75, 'blue')
square(200, 200, 100, 'yellow')
