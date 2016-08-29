src=3-numeros-em-ordem-crescente.c
obj=$(src:.c=.o)
exec=3-numeros-em-ordem-crescente
head=
cflags=-Wall
all: $(exec)
$(exec): $(scr) $(head)
	gcc $(cflags) $(src) -o $@
clean:
	rm -f $(obj) $(exec)
