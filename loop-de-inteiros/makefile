src=loop-de-inteiros.c
obj=$(src:.c=.o)
exec=loop-de-inteiros
head=
cflags=-Wall
all: $(exec)
$(exec): $(scr) $(head)
	gcc $(cflags) $(src) -o $@
clean:
	rm -f $(obj) $(exec)
