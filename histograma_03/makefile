src=histograma_03.c
obj=$(src:.c=.o)
exec=histograma_04
head=
cflags=-Wall
all: $(exec)
$(exec): $(scr) $(head)
	gcc $(cflags) $(src) -o $@
clean:
	rm -f $(obj) $(exec)
