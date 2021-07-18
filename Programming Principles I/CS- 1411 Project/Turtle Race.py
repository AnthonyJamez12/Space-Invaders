import time
import turtle
import random
from random import randint, choice

win = turtle.Screen()
win.title("Turtle Race")
turtle.bgcolor("white")
turtle.color("black")
turtle.speed(0)
turtle.penup()
turtle.setpos(0, 300)
turtle.write("Turtle Race", font=("Arial", 20))
turtle.penup()


stamp_size = 20
square_size = 15
finish_line = 200

turtle.color("black")
turtle.shape("square")
turtle.shapesize(square_size / stamp_size)
turtle.penup()

for i in range(35):
    turtle.setpos(finish_line, (400 - (i * square_size * 2)))
    turtle.stamp()

for j in range(35):
    turtle.setpos(finish_line + square_size, ((400 - square_size) - (j * square_size * 2)))
    turtle.stamp()

turtle.hideturtle()


colors = ["blue", "red", "green", "yellow", "purple", "orange", "black", "violet", "pink"]
speed = [1, 2, 3, 4, 5, 6, 7, 8, 9]


    
turtle1 = turtle.Turtle()
turtle1.speed(1)
turtle1.color(random.choice(colors))
turtle1.shape("turtle")
turtle1.penup()
turtle1.goto(-400, 200)
turtle1.penup()

turtle2= turtle.Turtle()
turtle2.speed(1)
turtle2.color(random.choice(colors))
turtle2.shape("turtle")
turtle2.penup()
turtle2.goto(-400, 150)
turtle2.penup()

turtle3 = turtle.Turtle()
turtle3.speed(1)
turtle3.color(random.choice(colors))
turtle3.shape("turtle")
turtle3.penup()
turtle3.goto(-400, 100)
turtle3.penup()

turtle4 = turtle.Turtle()
turtle4.speed(1)
turtle4.color(random.choice(colors))
turtle4.shape("turtle")
turtle4.penup()
turtle4.goto(-400, 50)
turtle4.penup()

turtle5 = turtle.Turtle()
turtle5.speed(1)
turtle5.color(random.choice(colors))
turtle5.shape("turtle")
turtle5.penup()
turtle5.goto(-400, 0)
turtle5.penup()

time.sleep(1)

for i in range(145):
    turtle1.forward(random.choice(speed))
    turtle2.forward(random.choice(speed))
    turtle3.forward(random.choice(speed))
    turtle4.forward(random.choice(speed))
    turtle5.forward(random.choice(speed))


while True:
    winner = choice([turtle1, turtle2, turtle3, turtle4, turtle5])
    winner.forward(80)
    if winner.xcor() >= 200:
        winner.forward(80)
        break
    winner.color("gold")
    screen.exitonclick()

