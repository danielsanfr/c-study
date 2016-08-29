src=correcao-de-provas.c
obj=$(src:.c=.o)
exec=correcao-de-provas
head=
cflags=-Wall
all: $(exec)
$(exec): $(scr) $(head)
	gcc $(cflags) $(src) -o $@
clean:
	rm -f $(obj) $(exec)
