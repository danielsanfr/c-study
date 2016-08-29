src=serie-fatorial.c
obj=$(src:.c=.o)
exec=serie-fatorial
head=
cflags=-Wall
all: $(exec)
$(exec): $(scr) $(head)
	gcc $(cflags) $(src) -o $@
clean:
	rm -f $(obj) $(exec)
