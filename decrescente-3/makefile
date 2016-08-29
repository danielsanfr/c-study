src=decrescente-3.c
obj=$(src:.c=.o)
exec=decrescente-3
head=
cflags=-Wall
all: $(exec)
$(exec): $(scr) $(head)
	gcc $(cflags) $(src) -o $@
clean:
	rm -f $(obj) $(exec)
