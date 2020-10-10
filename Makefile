EXEC = mtx
CC = gcc
$(EXEC): main.c mtxio.c mtx.c
	$(CC) -std=c99 -o $(EXEC) main.c mtxio.c mtx.c
	rm -f *.o
clean:
	rm -f $(EXEC)
