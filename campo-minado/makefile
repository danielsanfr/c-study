src=campo-minado.c
obj=$(src:.c=.o)
exec=campo-minado
head=
cflags=-Wall
all: $(exec)
$(exec): $(scr) $(head)
	gcc $(cflags) $(src) -o $@
clean:
	rm -f $(obj) $(exec)
