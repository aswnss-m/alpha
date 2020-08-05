import pygame

#color

white = (255,255,255)
black = (0,0,0)

#the width and height of the segments of the snake
segment_width = 15
segment_height = 15
segment_margin = 2

#intial velocity
x_change = segment_width + segment_margin
y_change = 0

class Segment(pygame.sprite.Sprite):
    """ class to represent one segment of the snake """

    def __init__(self, x, y):
        super().__init__()

        self.image = pygame.Surface([segment_width, segment_height])
        self.image.fill(white)

        self.rect = self.image.get_rect()
        self.rect.x = x
        self.rect.y = y

pygame.init()

screen = pygame.display.set_mode([800,600])

pygame.display.set_caption('Snake Gam')

allspritelists = pygame.sprite.Group()

snake_segments = []

for i in range(15):

    x= 250 - (segment_width +segment_margin) * i
    y = 30
    segment = Segment(x, y)
    snake_segments.append(segment)
    allspritelists.add(segment)

clock = pygame.time.Clock()
done = False

while not done :

    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            done = True
        if event.type == pygame.KEYDOWN:
            if event.type == pygame.K_LEFT:
                x_change = (segment_width + segment_margin) * -1
                y_change = 0
            if event.type == pygame.K_RIGHT:
                x_change = (segment_width + segment_margin)
                y_change = 0
            if event.type == pygame.K_UP:
                x_change = 0
                y_change = (segment_height + segment_margin) * -1
            if event.type == pygame.K_DOWN:
                x_change =0
                y_change = (segment_height * segment_margin)

        old_segment = snake_segments.pop()
        allspritelists.remove(old_segment)

        x = snake_segments[0].rect.x + x_change
        y = snake_segments[0].rect.y + y_change
        segment = Segment(x, y)

        snake_segments.insert(0, segment)
        allspritelists.add(segment)

        screen.fill(black)

        allspritelists.draw(screen)

        pygame.display.flip()

        clock.tick(2)
pygame.exit()
