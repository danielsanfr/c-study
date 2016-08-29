src=sequencia-de-10.c
obj=$(src:.c=.o)
exec=sequencia-de-10
head=
cflags=-Wall
all: $(exec)
$(exec): $(scr) $(head)
	gcc $(cflags) $(src) -o $@
clean:
	rm -f $(obj) $(exec)
