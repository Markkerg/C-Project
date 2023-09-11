all:
	gcc -Iinclude -Iinclude/SDL2 -Iresource -Llib -o Main *.c -lSDL2main -lSDL2 -lSDL2_image