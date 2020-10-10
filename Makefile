EXEC = mtx
CC = gcc
$(EXEC): main.c mtx.c
	$(CC) -std=c99 -o $(EXEC) main.c mtx.c
	rm -f *.o
clean:
	rm -f $(EXEC)
