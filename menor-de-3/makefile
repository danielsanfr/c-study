src=menor-de-3.c
obj=$(src:.c=.o)
exec=menor-de-3
head=
cflags=-Wall
all: $(exec)
$(exec): $(scr) $(head)
	gcc $(cflags) $(src) -o $@
clean:
	rm -f $(obj) $(exec)
