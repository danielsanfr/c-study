src=media-de-n-numeros.c
obj=$(src:.c=.o)
exec=media-de-n-numeros
head=
cflags=-Wall
all: $(exec)
$(exec): $(scr) $(head)
	gcc $(cflags) $(src) -o $@ -lm
clean:
	rm -f $(obj) $(exec)
