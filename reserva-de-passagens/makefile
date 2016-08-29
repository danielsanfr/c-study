src=reserva-de-passagens.c
obj=$(src:.c=.o)
exec=reserva-de-passagens
head=
cflags=-Wall
all: $(exec)
$(exec): $(scr) $(head)
	gcc $(cflags) $(src) -o $@
clean:
	rm -f $(obj) $(exec)
