src=histograma-01.c
obj=$(src:.c=.o)
exec=histograma-01
head=
cflags=-Wall
all: $(exec)
$(exec): $(scr) $(head)
	gcc $(cflags) $(src) -o $@
clean:
	rm -f $(obj) $(exec)
