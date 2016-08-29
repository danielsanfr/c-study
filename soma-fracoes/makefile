src=soma-fracoes.c
obj=$(src:.c=.o)
exec=soma-fracoes
head=
cflags=-Wall
all: $(exec)
$(exec): $(scr) $(head)
	gcc $(cflags) $(src) -o $@
clean:
	rm -f $(obj) $(exec)
