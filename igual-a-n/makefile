src=igual-a-n.c
obj=$(src:.c=.o)
exec=igual-a-n
head=
cflags=-Wall
all: $(exec)
$(exec): $(scr) $(head)
	gcc $(cflags) $(src) -o $@
clean:
	rm -f $(obj) $(exec)
