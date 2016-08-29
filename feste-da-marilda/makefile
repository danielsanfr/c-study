src=feste-da-marilda.c
obj=$(src:.c=.o)
exec=feste-da-marilda
head=
cflags=-Wall
all: $(exec)
$(exec): $(scr) $(head)
	gcc $(cflags) $(src) -o $@
clean:
	rm -f $(obj) $(exec)
