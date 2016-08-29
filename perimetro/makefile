src=perimetro.c
obj=$(src:.c=.o)
exec=perimetro
head=
cflags=-Wall
all: $(exec)
$(exec): $(scr) $(head)
	gcc $(cflags) $(src) -o $@ -lm
clean:
	rm -f $(obj) $(exec)
