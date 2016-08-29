src=multi-da-diagonal-da-matriz.c
obj=$(src:.c=.o)
exec=multi-da-diagonal-da-matriz
head=
cflags=-Wall
all: $(exec)
$(exec): $(scr) $(head)
	gcc $(cflags) $(src) -o $@
clean:
	rm -f $(obj) $(exec)
