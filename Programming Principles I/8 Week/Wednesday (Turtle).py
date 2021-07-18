import turtle


def circle(x, y, radius, color):
    turtle.hideturtle()
    turtle.penup()
    turtle.goto(x, y - radius)
    turtle.pendown()
    turtle.fillcolor(color)
    turtle.begin_fill()
    turtle.circle(radius)
    turtle.end_fill()




circle(-100, -75, 50, "blue")
circle(0, 0, 50, "red")
circle(-50, 0, 50, "yellow")
circle(250, 350, 50, "black")
