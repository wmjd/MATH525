EXEC = mtx
CC = gcc
$(EXEC): main.c mtxio.c 
	$(CC) -std=c99 -o $(EXEC) main.c mtxio.c
	rm -f *.o
clean:
	rm -f $(EXEC)
