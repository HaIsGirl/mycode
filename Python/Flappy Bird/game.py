import pygame, sys
import random 
pygame.display.set_caption('Flappy Bird')
#Tạo hàm cho trò chơi 
def draw_floor():	
	screen.blit(floor,(floor_x_pos,600))
	screen.blit(floor, (floor_x_pos+550,600))
def create_pipe():
	random_pipe_pos = random.choice(pipe_height)
	bottom_pipe = pipe_surface.get_rect(midtop = (500,random_pipe_pos))
	top_pipe = pipe_surface.get_rect(midtop = (500,random_pipe_pos-690))
	return bottom_pipe, top_pipe
def move_pipe(pipes):
	for pipe in pipes :
		pipe.centerx -= 5
	return pipes
def draw_pipe(pipes):
	for pipe in pipes: 
		if pipe.bottom >= 600: 
			screen.blit(pipe_surface, pipe)
		else:
			flip_pipe = pygame.transform.flip(pipe_surface,False, True)
			screen.blit(flip_pipe, pipe)
def check_collision(pipes):
	for pipe in pipes:
		if bird_rect.colliderect(pipe):
			return False
		if bird_rect.top <= -75 or bird_rect.bottom >= 600:
			return False
	return True
def rotate_bird(nbird):
	nbird=pygame.transform.rotozoom(nbird,-bird_movement*2,1)
	return nbird
def bird_animation():
	nbird = bird_list[bird_index]
	nbird_rect = nbird.get_rect(center = (100, bird_rect.centery)) 
	return nbird, nbird_rect
def score_display():
	score_surface = game_font.render( str(score) ,True,(255,255,255),18)
	score_rect = score_surface.get_rect(center = (216,100))
	screen.blit(score_surface,score_rect)
pygame.init()
screen=pygame.display.set_mode((432,700))
clock= pygame.time.Clock()
#Tạo các biến cho trò chơi
gravity = 0.25
bird_movement = 0
game_play = False
#Chèn backgroud vô screen
background= pygame.image.load('C:/Users/Admin/Code/python/Flappy Bird/FileGame/assets/background-night.png').convert()
background= pygame.transform.scale2x(background)
#chèn sàn 
floor= pygame.image.load('C:/Users/Admin/Code/python/Flappy Bird/FileGame/assets/floor.png').convert()
floor=pygame.transform.scale2x(floor)
floor_x_pos = 0
#Chèn chim
bird_mid=pygame.image.load('C:/Users/Admin/Code/python/Flappy Bird/FileGame/assets/yellowbird-midflap.png')
bird_up=pygame.image.load('C:/Users/Admin/Code/python/Flappy Bird/FileGame/assets/yellowbird-upflap.png')
bird_down=pygame.image.load('C:/Users/Admin/Code/python/Flappy Bird/FileGame/assets/yellowbird-downflap.png')
bird_list = [bird_down,bird_mid,bird_up]
bird_index=0
bird = bird_list[bird_index]
bird=pygame.transform.scale(bird,(50,60))
bird_rect = bird.get_rect(center=(100,200))
bird_flap = pygame.USEREVENT + 1
pygame.time.set_timer(bird_flap,200)
#chèn ống 
pipe_surface=pygame.image.load('C:/Users/Admin/Code/python/Flappy Bird/FileGame/assets/pipe-green.png')
pipe_surface=pygame.transform.scale2x(pipe_surface)
#tạo timer
spawnpipe = pygame.USEREVENT
pygame.time.set_timer(spawnpipe, 1000)
pipe_height = [200,300,400,500]
pipe_list =[]

#tạo thông báo thua
dead = pygame.image.load('C:/Users/Admin/Code/python/Flappy Bird/FileGame/assets/gameover.png')
dead= pygame.transform.scale2x(dead)
#tạo font
game_font = pygame.font.Font('C:/Users/Admin/Code/python/Flappy Bird/FileGame/04B_19.TTF')
#tao diem
score = 0
high_score = 0
#Khối lệnh chạy gam
while True:
	for event in pygame.event.get():
		if event.type == pygame.QUIT:
			pygame.quit()
			sys.exit()
		if event.type == pygame.KEYDOWN :
			if event.key == pygame.K_SPACE and game_play == True:
				bird_movement = 0
				bird_movement = -7.5
			if event.key == pygame.K_SPACE and game_play==False:
				game_play=True
				pipe_list.clear()
				bird_movement = 0
				bird_rect.center = (100,200)
		if event.type == spawnpipe:
			pipe_list.extend(create_pipe())
			print(create_pipe)
		if event.type == bird_flap:
			if bird_index< 2 :
				bird_index +=1
			else: 
				bird_index = 0
			bird, bird_rect = bird_animation()
	screen.blit(background,(0,0))
	if game_play:
		bird_movement += gravity
		rotated_bird = rotate_bird(bird)
		bird_rect.centery += bird_movement
		screen.blit(pygame.transform.scale(rotated_bird,(50,40)),bird_rect)
		game_play = check_collision(pipe_list)
		pipe_list = move_pipe(pipe_list)
		draw_pipe(pipe_list)
		score_display()
	if game_play == False:
			screen.blit(pygame.transform.scale(bird,(45,40)),bird_rect)
	floor_x_pos -=0.25
	draw_floor()
	if floor_x_pos <= -432:
		floor_x_pos = 0
	clock.tick(100) 
	pygame.display.update()