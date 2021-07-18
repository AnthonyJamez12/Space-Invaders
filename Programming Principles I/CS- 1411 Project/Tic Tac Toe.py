from turtle import *

pieces = ["", "", "", "", "", "", "", "", ""]
turn = "X"
setup(600, 600)
bgcolor("white")

pencolor("black")
hideturtle()
speed('fastest')
pensize(10)
penup()


goto(-300, 100)
pendown()
forward(600)
penup()
goto(-300, -100)
pendown()
forward(600)
penup()


goto(-100, 300)
setheading(-90)
pendown()
forward(600)
penup()
goto(100, 300)
pendown()
forward(600)
penup()

pencolor("red")


def nought(x, y):
    penup()
    goto(x + 100, y - 180)
    setheading(0)
    pendown()
    circle(80)
    penup()



def cross(x, y):
    penup()
    goto(x + 20, y - 20)
    setheading(-45)
    pendown()
    forward(226)
    penup()
    goto(x + 180, y - 20)
    setheading(-135)
    pendown()
    forward(226)
    penup()


def drawPieces(pieces):
    x, y = -300, 300

    for piece in pieces:
        if piece == "X":
            cross(x, y)
        elif piece == "O":
            nought(x, y)

        x += 200
        if x > 100:
            x = -300
            y -= 200

def clicked(x, y):
    global turn, pieces

    onscreenclick(None)  

    column = (x + 300) // 200
    row = (y - 300) // -200
    square = int(row * 3 + column)

    print("You clicked ", x, ",", y, " which is square ", square)

    if pieces[square] == "":
        pieces[square] = turn

        if turn == "X":
            turn = "O"
        else:
            turn = "X"

        drawPieces(pieces)
    else:
        print("That square is already taken")

    onscreenclick(clicked)


onscreenclick(clicked)

mainloop()
