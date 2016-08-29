src=antecessor-e-sucessor.c
obj=$(src:.c=.o)
exec=antecessor-e-sucessor
head=
cflags=-Wall
all: $(exec)
$(exec): $(scr) $(head)
	gcc $(cflags) $(src) -o $@
clean:
	rm -f $(obj) $(exec)
