src=loop-de-impares.c
obj=$(src:.c=.o)
exec=loop-de-impares
head=
cflags=-Wall
all: $(exec)
$(exec): $(scr) $(head)
	gcc $(cflags) $(src) -o $@
clean:
	rm -f $(obj) $(exec)
