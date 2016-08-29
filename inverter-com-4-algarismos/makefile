src=inverter-com-4-algarismos.c
obj=$(src:.c=.o)
exec=inverter-com-4-algarismos
head=
cflags=-Wall
all: $(exec)
$(exec): $(scr) $(head)
	gcc $(cflags) $(src) -o $@
clean:
	rm -f $(obj) $(exec)
