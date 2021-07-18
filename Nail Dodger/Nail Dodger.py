import turtle
import random
import math
import time


#Screen
win = turtle.Screen()
win.title("IDK")
win.bgcolor("black")
win.bgpic("road.gif")



scores = 0

score = turtle.Turtle()
score.speed(0)
score.penup()
score.color("white")
score.setposition(-290, 290)
scorestring = "Score: %s" %score
score.write(scorestring, False, align = "left", font =("Ariel", 12, "normal"))
score.hideturtle()

turtle.register_shape("car.gif")
turtle.register_shape("nail.gif")

#Player
car = turtle.Turtle()
car.penup()
car.goto(0, -270)
car.shape("car.gif")
car.color("red")
car.shapesize(2, 1)
car.penup()

carspeed = 20

#Choose number of enemies on screen
number_of_enemies = 10


#Create an empty list of enemies
enemies = []

#Add enemies to the list
for i in range(number_of_enemies):
    enemies.append(turtle.Turtle())

for enemy in enemies:
    enemy.shape("nail.gif")
    enemy.color("blue")
    enemy.penup()
    enemy.speed(0)
    x = random.randint(-300, 300)
    y = random.randint(0, 300)
    enemy.setposition(x, y)
    
enemyspeed = 30



#Define the movement
def move_left():
    x = car.xcor()
    x -= carspeed
    if x < -280:
        x = -280
    car.setx(x)

def move_right():
    x = car.xcor()
    x += carspeed
    if x > 280:
        x = 280
    car.setx(x)

def isCollision(t1, t2):
    distance = math.sqrt(math.pow(t1.xcor() -t2.xcor(),2)+ math.pow(t1.ycor() -t2.ycor(), 2))
    if distance < 15:
        return True
    else:
        return False
    

#Keybinding
turtle.listen()
turtle.onkey(move_left, "Left")
turtle.onkey(move_right, "Right")


#Mainloop
while True:

    for enemy in enemies:
        y = enemy.ycor()
        y -= enemyspeed
        enemy.sety(y)
        if enemy.ycor() < -300:
            x = random.randint(-300, 300)
            y = random.randint(0, 300)
            enemy.setposition(x, y)

        
        if isCollision(car, enemy):
            car.hideturtle()
            enemy.hideturtle()
            print("Game Over")
            break

        if not isCollision(car, enemy):
            scores += 100
            scorestring = "Score: %s" %scores
            score.clear()
            score.write(scorestring, False, align = "left", font =("Ariel", 12, "normal"))



