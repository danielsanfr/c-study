src=histograma-02.c
obj=$(src:.c=.o)
exec=histograma-02
head=
cflags=-Wall
all: $(exec)
$(exec): $(scr) $(head)
	gcc $(cflags) $(src) -o $@
clean:
	rm -f $(obj) $(exec)
