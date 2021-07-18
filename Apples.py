import pygame
pygame.init()


win_size = win_width, win_height = 1422, 800
win = pygame.display.set_mode(win_size, pygame.RESIZABLE)

pygame.display.set_caption("Apple")

bg = pygame.image.load('bg.jpg')
win.blit(bg, (0,0))

walkDown = [pygame.transform.scale(pygame.image.load('d1.png'), (49, 64)),
            pygame.transform.scale(pygame.image.load('d2.png'), (49, 64)),
            pygame.transform.scale(pygame.image.load('d3.png'), (49, 64)),
            pygame.transform.scale(pygame.image.load('d4.png'), (49, 64))]

walkLeft = [pygame.transform.scale(pygame.image.load('l1.png'), (43, 60)),
            pygame.transform.scale(pygame.image.load('l2.png'), (43, 60)),
            pygame.transform.scale(pygame.image.load('l3.png'), (43, 60)),
            pygame.transform.scale(pygame.image.load('l4.png'), (43, 60))]

walkRight = [pygame.transform.scale(pygame.image.load('r1.png'), (43, 60)),
             pygame.transform.scale(pygame.image.load('r2.png'), (43, 60)),
             pygame.transform.scale(pygame.image.load('r3.png'), (43, 60)),
             pygame.transform.scale(pygame.image.load('r4.png'), (43, 60))]

walkUp = [pygame.transform.scale(pygame.image.load('u1.png'), (49, 64)),
          pygame.transform.scale(pygame.image.load('u2.png'), (49, 64)),
          pygame.transform.scale(pygame.image.load('u3.png'), (49, 64)),
          pygame.transform.scale(pygame.image.load('u4.png'), (49, 64)),]

char = [pygame.transform.scale(pygame.image.load('standing.png'),  (49, 64)), ]

clock = pygame.time.Clock()

class player(object):
    def __init__(self, x, y, width, height):
        self.x = x
        self.y = y
        self.height = height
        self.width = width
        self.vel = 8
        self.walkCount = 0
        self.left = False
        self.right = False
        self.up = False
        self.down = False
        self.standing = True
        self.tilesize = 32
        self.lightgrey = (40, 40, 40)

    def draw(self, win):
        if self.walkCount + 1 >= 12:
            self.walkCount = 0

        if not(self.standing):
            if self.left:
                win.blit(walkLeft[self.walkCount//3], (self.x,self.y))
                self.walkCount += 1
            elif self.right:
                win.blit(walkRight[self.walkCount//3], (self.x,self.y))
                self.walkCount +=1
            elif self.up:
                win.blit(walkUp[self.walkCount//3], (self.x,self.y))
                self.walkCount +=1
            elif self.down:
                win.blit(walkDown[self.walkCount//3], (self.x,self.y))
                self.walkCount +=1
        else:
            if self.left:
                win.blit(walkLeft[0], (self.x, self.y))
            elif self.right:
                win.blit(walkRight[0], (self.x, self.y))
            elif self.up:
                win.blit(walkUp[0], (self.x, self.y))
            else:
                win.blit(walkDown[0], (self.x,self.y))

        for x in range(0, self.width, self.tilesize):
            pygame.draw.line(win, self.lightgrey, (x, 0), (x, self.height))
        for y in range(0, self.height, self.tilesize):
            pygame.draw.line(win, self.lightgrey, (0, y), (self.width, y))



def redrawGameWindow():
    win.blit(bg, (0,0))
    man.draw(win)

    pygame.display.update()


#MainLoop
man = player(675, 400, 8, 12)
run = True
while run:
    pygame.time.delay(27)

    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            run = False

    redrawGameWindow()

    keys = pygame.key.get_pressed()

    if keys[pygame.K_DOWN] and man.y < 710 - man.height - man.vel:
        man.y += man.vel
        man.down = True
        man.up = False
        man.right = False
        man.left = False
        man.standing = False
    elif keys[pygame.K_LEFT] and man.x > man.vel:
        man.x -= man.vel
        man.left = True
        man.right = False
        man.down = False
        man.up = False
        man.standing = False
    elif keys[pygame.K_RIGHT] and man.x < 1350 - man.width - man.vel:
        man.x += man.vel
        man.left = False
        man.right = True
        man.up = False
        man.down = False
        man.standing = False
    elif keys[pygame.K_UP] and man.y > man.vel:
        man.y -= man.vel
        man.down = False
        man.up = True
        man.right = False
        man.left = False
        man.standing = False
    else:
        man.standing = True
        man.walkCount = 0


redrawGameWindow()
pygame.quit()
