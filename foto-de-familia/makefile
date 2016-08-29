src=foto-de-familia.c
obj=$(src:.c=.o)
exec=foto-de-familia
head=
cflags=-Wall
all: $(exec)
$(exec): $(scr) $(head)
	gcc $(cflags) $(src) -o $@
clean:
	rm -f $(obj) $(exec)
