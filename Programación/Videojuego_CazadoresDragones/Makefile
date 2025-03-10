CC = gcc
CFLAGS = -Wall -Wextra -Werror
OBJ = main.o cazador.o dragon.o combate.o utilidades.o 

cazadores: $(OBJ)
	$(CC) $(CFLAGS) -o juego $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f *.o juego
