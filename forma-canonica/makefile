src=forma-canonica.c
obj=$(src:.c=.o)
exec=forma-canonica
head=
cflags=-Wall
all: $(exec)
$(exec): $(scr) $(head)
	gcc $(cflags) $(src) -o $@
clean:
	rm -f $(obj) $(exec)
