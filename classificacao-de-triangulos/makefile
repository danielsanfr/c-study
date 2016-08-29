src=classificacao-de-triangulos.c
obj=$(src:.c=.o)
exec=classificacao-de-triangulos
head=
cflags=-Wall
all: $(exec)
$(exec): $(scr) $(head)
	gcc $(cflags) $(src) -o $@
clean:
	rm -f $(obj) $(exec)
