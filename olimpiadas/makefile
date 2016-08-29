src=olimpiadas.c
obj=$(src:.c=.o)
exec=olimpiadas
head=
cflags=-Wall
all: $(exec)
$(exec): $(scr) $(head)
	gcc $(cflags) $(src) -o $@
clean:
	rm -f $(obj) $(exec)
