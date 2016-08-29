src=numeros-perfeitos.c
obj=$(src:.c=.o)
exec=numeros-perfeitos
head=
cflags=-Wall
all: $(exec)
$(exec): $(scr) $(head)
	gcc $(cflags) $(src) -o $@
clean:
	rm -f $(obj) $(exec)
