src=quantos-minutos-se-passaram.c
obj=$(src:.c=.o)
exec=quantos-minutos-se-passaram
head=
cflags=-Wall
all: $(exec)
$(exec): $(scr) $(head)
	gcc $(cflags) $(src) -o $@
clean:
	rm -f $(obj) $(exec)
