src=frigorifico.c
obj=$(src:.c=.o)
exec=frigorifico
head=
cflags=-Wall
all: $(exec)
$(exec): $(scr) $(head)
	gcc $(cflags) $(src) -o $@
clean:
	rm -f $(obj) $(exec)
