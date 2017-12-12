import pygame
from pygame.locals import *
pygame.init()
resolution=tuple(map(int,input().split()))
display = pygame.display
screen = display.set_mode(resolution)
color = 255,255,255

while True:
    for e in pygame.event.get():
        if e.type == QUIT:
            raise SystemExit
        pygame.draw.line(screen,color,(0,0),resolution, 5)
        pygame.draw.line(screen, color, (resolution[0], 0), (0,resolution[1]), 5)
        pygame.display.update()


