import pygame
from pygame.locals import *
pygame.init()
resolution=tuple(map(int,input().split()))
display = pygame.display
rect = Rect((1,1), (resolution[0]-2,resolution[1]-2))
screen = display.set_mode(resolution)
color = pygame.color
white = 255,0,0
pygame.draw.rect(screen, white,rect)
while True:
    for e in pygame.event.get():
        if e.type == QUIT:
            raise SystemExit

        pygame.display.update()


