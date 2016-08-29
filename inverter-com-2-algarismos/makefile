src=inverter-com-2-algarismos.c
obj=$(src:.c=.o)
exec=inverter-com-2-algarismos
head=
cflags=-Wall
all: $(exec)
$(exec): $(scr) $(head)
	gcc $(cflags) $(src) -o $@
clean:
	rm -f $(obj) $(exec)
