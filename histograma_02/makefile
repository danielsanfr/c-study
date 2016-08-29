src=histograma_02.c
obj=$(src:.c=.o)
exec=histograma_02
head=
cflags=-Wall
all: $(exec)
$(exec): $(scr) $(head)
	gcc $(cflags) $(src) -o $@
clean:
	rm -f $(obj) $(exec)
