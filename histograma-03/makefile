src=histograma-03.c
obj=$(src:.c=.o)
exec=histograma-03
head=
cflags=-Wall
all: $(exec)
$(exec): $(scr) $(head)
	gcc $(cflags) $(src) -o $@
clean:
	rm -f $(obj) $(exec)
