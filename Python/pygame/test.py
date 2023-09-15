import pygame

pygame.init()

screen = pygame.display.set_mode((500,600))

grey=(150,150,150)
black=(5,5,5)
running = True
while running == True: 
	screen.fill(grey)
	pygame.draw.rect(screen, black, (100,100,50,50))
	for event in pygame.event.get():
		if event.type == pygame.QUIT:
			running=False
		if event.type == pygame.MOUSEBUTTONDOWN :
			if event.button == 1:
				print(screen,"Gavl")
			elif event.button == 3:
				print("Nhan cai cc")
		pass 

	pygame.display.flip()
pygame.quit()